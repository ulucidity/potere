//////////////////////////////////////////////////////////////////////////
/// Copyright (c) 1988-2025 $organization$
///
/// This software is provided by the author and contributors ``as is'' 
/// and any express or implied warranties, including, but not limited to, 
/// the implied warranties of merchantability and fitness for a particular 
/// purpose are disclaimed. In no event shall the author or contributors 
/// be liable for any direct, indirect, incidental, special, exemplary, 
/// or consequential damages (including, but not limited to, procurement 
/// of substitute goods or services; loss of use, data, or profits; or 
/// business interruption) however caused and on any theory of liability, 
/// whether in contract, strict liability, or tort (including negligence 
/// or otherwise) arising in any way out of the use of this software, 
/// even if advised of the possibility of such damage.
///
///   File: main.hpp
///
/// Author: $author$
///   Date: 5/1/2025, 5/9/2025
//////////////////////////////////////////////////////////////////////////
#ifndef XOS_APP_CONSOLE_NETWORK_SOCKETS_PROTOCOL_POWER_CONTROL_SERVER_MAIN_HPP
#define XOS_APP_CONSOLE_NETWORK_SOCKETS_PROTOCOL_POWER_CONTROL_SERVER_MAIN_HPP

#include "xos/app/console/network/sockets/protocol/power/control/server/main_opt.hpp"

namespace xos {
namespace app {
namespace console {
namespace network {
namespace sockets {
namespace protocol {
namespace power {
namespace control {
namespace server {

/// class maint
template 
<class TExtends = xos::app::console::network::sockets::protocol::power::control::server::main_optt<>,  class TImplements = typename TExtends::implements>

class maint: virtual public TImplements, public TExtends {
public:
    typedef TImplements implements;
    typedef TExtends extends;
    typedef maint derives;

    typedef typename extends::char_t char_t;
    typedef typename extends::end_char_t end_char_t;
    enum { end_char = extends::end_char };
    typedef typename extends::string_t string_t;
    typedef typename extends::reader_t reader_t;
    typedef typename extends::writer_t writer_t;
    typedef typename extends::file_t file_t;

    typedef typename extends::sequence_char_t sequence_char_t;
    typedef typename extends::char_sequence_t char_sequence_t;
    typedef typename extends::char_seeker_t char_seeker_t;
    typedef typename extends::char_reader_t char_reader_t;
    typedef typename extends::char_writer_t char_writer_t;
    typedef typename extends::reader_string_t reader_string_t;
    typedef typename extends::string_reader_t string_reader_t;

    /// constructor / destructor
    maint(): run_(0) {
    }
    virtual ~maint() {
    }
private:
    maint(const maint &copy) {
        throw exception(exception_unexpected);
    }

protected:
    typedef typename extends::in_reader_t in_reader_t;
    typedef typename extends::out_writer_t out_writer_t;
    typedef typename extends::err_writer_t err_writer_t;

    //////////////////////////////////////////////////////////////////////////
    /// run
    int (derives::*run_)(int argc, char_t** argv, char_t** env);
    virtual int run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        if ((run_)) {
            LOGGER_IS_LOGGED_INFO("(!(err = (this->*run_)(argc, argv, env)))...");
            if (!(err = (this->*run_)(argc, argv, env))) {
                LOGGER_IS_LOGGED_INFO("...(!(" << err << " = (this->*run_)(argc, argv, env)))");
            } else {
                LOGGER_IS_LOGGED_INFO("...failed on (!(" << err << " = (this->*run_)(argc, argv, env)))");
            }
        } else {
            LOGGER_IS_LOGGED_INFO("(!(err = extends::run(argc, argv, env)))...");
            if (!(err = extends::run(argc, argv, env))) {
                LOGGER_IS_LOGGED_INFO("...(!(" << err << " = extends::run(argc, argv, env)))");
            } else {
                LOGGER_IS_LOGGED_INFO("...failed on (!(err" << err << " = extends::run(argc, argv, env)))");
            }
        }
        return err;
    }

    //////////////////////////////////////////////////////////////////////////
    /// ...set_system_restart_run
    virtual int set_system_restart_run(bool &is_true, int argc, char_t** argv, char_t** env) {
        int err = 0;
        LOGGER_IS_LOGGED_INFO("((is_true = (this->set_restart(true))))...");
        if ((is_true = (this->set_restart(true)))) {
            LOGGER_IS_LOGGED_INFO("...((" << is_true << " = (this->set_restart(true))))");
            LOGGER_IS_LOGGED_INFO("((is_true = (this->restart_set(true))))...");
            if ((is_true = (this->restart_set(true)))) {
                LOGGER_IS_LOGGED_INFO("...((" << is_true << " = (this->restart_set(true))))");
            } else {
                LOGGER_IS_LOGGED_INFO("...failed on ((" << is_true << " = (this->restart_set(true))))");
            }
        } else {
            LOGGER_IS_LOGGED_INFO("...failed on ((" << is_true << " = (this->set_restart(true))))");
        }
        return err;
    }
    //////////////////////////////////////////////////////////////////////////
    /// ...set_system_stop_run
    virtual int set_system_stop_run(bool &is_true, int argc, char_t** argv, char_t** env) {
        int err = 0;
        LOGGER_IS_LOGGED_INFO("((is_true = (this->set_stop(true))))...");
        if ((is_true = (this->set_stop(true)))) {
            LOGGER_IS_LOGGED_INFO("...((" << is_true << " = (this->set_stop(true))))");
            LOGGER_IS_LOGGED_INFO("((is_true = (this->stop_set(true))))...");
            if ((is_true = (this->stop_set(true)))) {
                LOGGER_IS_LOGGED_INFO("...((" << is_true << " = (this->stop_set(true))))");
            } else {
                LOGGER_IS_LOGGED_INFO("...failed on ((" << is_true << " = (this->stop_set(true))))");
            }
        } else {
            LOGGER_IS_LOGGED_INFO("...failed on ((" << is_true << " = (this->set_stop(true))))");
        }
        return err;
    }
    //////////////////////////////////////////////////////////////////////////

    //////////////////////////////////////////////////////////////////////////
    /// ...accept_run
    virtual int before_accept_connect_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        if (!(err = extends::before_accept_connect_run(argc, argv, env))) {
            LOGGER_IS_LOGGED_INFO("this->gpio_initialize_run(argc, argv, env)...");
            if (!(err = this->gpio_initialize_run(argc, argv, env))) {
                LOGGER_IS_LOGGED_INFO("..." << err << " = this->gpio_initialize_run(argc, argv, env)");
            } else {
                LOGGER_IS_LOGGED_INFO("...failed " << err << " = this->before_gpio_pin_run(argc, argv, env)");
            }
        } else {
        }
        return err;
    }
    virtual int after_accept_connect_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        LOGGER_IS_LOGGED_INFO("this->gpio_finalize_run(argc, argv, env)...");
        if (!(err = this->gpio_finalize_run(argc, argv, env))) {
            LOGGER_IS_LOGGED_INFO("..." << err << " = this->gpio_finalize_run(argc, argv, env)");
        } else {
            LOGGER_IS_LOGGED_INFO("...failed " << err << " = this->gpio_finalize_run(argc, argv, env)");
        }
        if (!(err = extends::after_accept_connect_run(argc, argv, env))) {
        } else {
        }
        return err;
    }
    //////////////////////////////////////////////////////////////////////////

    //////////////////////////////////////////////////////////////////////////
    virtual int before_prepare_response_to_power_request_run(string_t& response, const string_t& request, int argc, char_t** argv, char_t** env) {
        int err = 0;
        /*LOGGER_IS_LOGGED_INFO("this->gpio_initialize_run(argc, argv, env)...");
        if (!(err = this->gpio_initialize_run(argc, argv, env))) {
            LOGGER_IS_LOGGED_INFO("..." << err << " = this->gpio_initialize_run(argc, argv, env)");
        } else {
            LOGGER_IS_LOGGED_INFO("...failed " << err << " = this->before_gpio_pin_run(argc, argv, env)");
        }*/
        return err;
    }
    virtual int after_prepare_response_to_power_request_run(string_t& response, const string_t& request, int argc, char_t** argv, char_t** env) {
        int err = 0;
        /*LOGGER_IS_LOGGED_INFO("this->gpio_finalize_run(argc, argv, env)...");
        if (!(err = this->gpio_finalize_run(argc, argv, env))) {
            LOGGER_IS_LOGGED_INFO("..." << err << " = this->gpio_finalize_run(argc, argv, env)");
        } else {
            LOGGER_IS_LOGGED_INFO("...failed " << err << " = this->gpio_finalize_run(argc, argv, env)");
        }*/
        return err;
    }
    //////////////////////////////////////////////////////////////////////////

    //////////////////////////////////////////////////////////////////////////
protected:
}; /// class maint 
typedef maint<> main;

} /// namespace server 
} /// namespace control 
} /// namespace power 
} /// namespace protocol 
} /// namespace sockets 
} /// namespace network 
} /// namespace console 
} /// namespace app 
} /// namespace xos 

#endif /// ndef XOS_APP_CONSOLE_NETWORK_SOCKETS_PROTOCOL_POWER_CONTROL_SERVER_MAIN_HPP
