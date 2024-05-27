#include <memory>
#include <seastar/core/seastar.hh>
#include <seastar/core/reactor.hh>
#include <seastar/core/thread.hh>
#include <seastar/core/app-template.hh>
#include <boost/program_options/option.hpp>
#include "lsquic.h"

namespace bpo = boost::program_options;

using namespace seastar;

int main(int ac, char** av) {
    app_template app;

    return app.run(ac, av, [&] {
        return seastar::async([&] {
	    fmt::print("{} {}\n",__FILE__,__LINE__); 
	    auto rc = lsquic_global_init (LSQUIC_GLOBAL_SERVER);
	    fmt::print("{} {} {}\n",__FILE__,__LINE__,rc);
            return 0;
        });
    });
}