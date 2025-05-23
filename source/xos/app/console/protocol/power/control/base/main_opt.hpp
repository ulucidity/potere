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
///   File: main_opt.hpp
///
/// Author: $author$
///   Date: 4/28/2025
//////////////////////////////////////////////////////////////////////////
#ifndef XOS_APP_CONSOLE_PROTOCOL_POWER_CONTROL_BASE_MAIN_OPT_HPP
#define XOS_APP_CONSOLE_PROTOCOL_POWER_CONTROL_BASE_MAIN_OPT_HPP

#include "xos/app/console/protocol/crlf/base/main.hpp"

///////////////////////////////////////////////////////////////////////
#define XOS_APP_CONSOLE_PROTOCOL_POWER_CONTROL_BASE_MAIN_ON_OPT "on"
#define XOS_APP_CONSOLE_PROTOCOL_POWER_CONTROL_BASE_MAIN_ON_OPTARG_REQUIRED MAIN_OPT_ARGUMENT_NONE
#define XOS_APP_CONSOLE_PROTOCOL_POWER_CONTROL_BASE_MAIN_ON_OPTARG_RESULT 0
#define XOS_APP_CONSOLE_PROTOCOL_POWER_CONTROL_BASE_MAIN_ON_OPTARG ""
#define XOS_APP_CONSOLE_PROTOCOL_POWER_CONTROL_BASE_MAIN_ON_OPTUSE "power on"
#define XOS_APP_CONSOLE_PROTOCOL_POWER_CONTROL_BASE_MAIN_ON_OPTVAL_S "N"
#define XOS_APP_CONSOLE_PROTOCOL_POWER_CONTROL_BASE_MAIN_ON_OPTVAL_C 'N'
#define XOS_APP_CONSOLE_PROTOCOL_POWER_CONTROL_BASE_MAIN_ON_OPTION \
   {XOS_APP_CONSOLE_PROTOCOL_POWER_CONTROL_BASE_MAIN_ON_OPT, \
    XOS_APP_CONSOLE_PROTOCOL_POWER_CONTROL_BASE_MAIN_ON_OPTARG_REQUIRED, \
    XOS_APP_CONSOLE_PROTOCOL_POWER_CONTROL_BASE_MAIN_ON_OPTARG_RESULT, \
    XOS_APP_CONSOLE_PROTOCOL_POWER_CONTROL_BASE_MAIN_ON_OPTVAL_C}, \

#define XOS_APP_CONSOLE_PROTOCOL_POWER_CONTROL_BASE_MAIN_OFF_OPT "off"
#define XOS_APP_CONSOLE_PROTOCOL_POWER_CONTROL_BASE_MAIN_OFF_OPTARG_REQUIRED MAIN_OPT_ARGUMENT_NONE
#define XOS_APP_CONSOLE_PROTOCOL_POWER_CONTROL_BASE_MAIN_OFF_OPTARG_RESULT 0
#define XOS_APP_CONSOLE_PROTOCOL_POWER_CONTROL_BASE_MAIN_OFF_OPTARG ""
#define XOS_APP_CONSOLE_PROTOCOL_POWER_CONTROL_BASE_MAIN_OFF_OPTUSE "power off"
#define XOS_APP_CONSOLE_PROTOCOL_POWER_CONTROL_BASE_MAIN_OFF_OPTVAL_S "F"
#define XOS_APP_CONSOLE_PROTOCOL_POWER_CONTROL_BASE_MAIN_OFF_OPTVAL_C 'F'
#define XOS_APP_CONSOLE_PROTOCOL_POWER_CONTROL_BASE_MAIN_OFF_OPTION \
   {XOS_APP_CONSOLE_PROTOCOL_POWER_CONTROL_BASE_MAIN_OFF_OPT, \
    XOS_APP_CONSOLE_PROTOCOL_POWER_CONTROL_BASE_MAIN_OFF_OPTARG_REQUIRED, \
    XOS_APP_CONSOLE_PROTOCOL_POWER_CONTROL_BASE_MAIN_OFF_OPTARG_RESULT, \
    XOS_APP_CONSOLE_PROTOCOL_POWER_CONTROL_BASE_MAIN_OFF_OPTVAL_C}, \

#define XOS_APP_CONSOLE_PROTOCOL_POWER_CONTROL_BASE_MAIN_STATE_OPT "state"
#define XOS_APP_CONSOLE_PROTOCOL_POWER_CONTROL_BASE_MAIN_STATE_OPTARG_REQUIRED MAIN_OPT_ARGUMENT_NONE
#define XOS_APP_CONSOLE_PROTOCOL_POWER_CONTROL_BASE_MAIN_STATE_OPTARG_RESULT 0
#define XOS_APP_CONSOLE_PROTOCOL_POWER_CONTROL_BASE_MAIN_STATE_OPTARG ""
#define XOS_APP_CONSOLE_PROTOCOL_POWER_CONTROL_BASE_MAIN_STATE_OPTUSE "power state"
#define XOS_APP_CONSOLE_PROTOCOL_POWER_CONTROL_BASE_MAIN_STATE_OPTVAL_S "S"
#define XOS_APP_CONSOLE_PROTOCOL_POWER_CONTROL_BASE_MAIN_STATE_OPTVAL_C 'S'
#define XOS_APP_CONSOLE_PROTOCOL_POWER_CONTROL_BASE_MAIN_STATE_OPTION \
   {XOS_APP_CONSOLE_PROTOCOL_POWER_CONTROL_BASE_MAIN_STATE_OPT, \
    XOS_APP_CONSOLE_PROTOCOL_POWER_CONTROL_BASE_MAIN_STATE_OPTARG_REQUIRED, \
    XOS_APP_CONSOLE_PROTOCOL_POWER_CONTROL_BASE_MAIN_STATE_OPTARG_RESULT, \
    XOS_APP_CONSOLE_PROTOCOL_POWER_CONTROL_BASE_MAIN_STATE_OPTVAL_C}, \

#define XOS_APP_CONSOLE_PROTOCOL_POWER_CONTROL_BASE_MAIN_INFO_OPT "info"
#define XOS_APP_CONSOLE_PROTOCOL_POWER_CONTROL_BASE_MAIN_INFO_OPTARG_REQUIRED MAIN_OPT_ARGUMENT_NONE
#define XOS_APP_CONSOLE_PROTOCOL_POWER_CONTROL_BASE_MAIN_INFO_OPTARG_RESULT 0
#define XOS_APP_CONSOLE_PROTOCOL_POWER_CONTROL_BASE_MAIN_INFO_OPTARG ""
#define XOS_APP_CONSOLE_PROTOCOL_POWER_CONTROL_BASE_MAIN_INFO_OPTUSE "switch info"
#define XOS_APP_CONSOLE_PROTOCOL_POWER_CONTROL_BASE_MAIN_INFO_OPTVAL_S "I"
#define XOS_APP_CONSOLE_PROTOCOL_POWER_CONTROL_BASE_MAIN_INFO_OPTVAL_C 'I'
#define XOS_APP_CONSOLE_PROTOCOL_POWER_CONTROL_BASE_MAIN_INFO_OPTION \
   {XOS_APP_CONSOLE_PROTOCOL_POWER_CONTROL_BASE_MAIN_INFO_OPT, \
    XOS_APP_CONSOLE_PROTOCOL_POWER_CONTROL_BASE_MAIN_INFO_OPTARG_REQUIRED, \
    XOS_APP_CONSOLE_PROTOCOL_POWER_CONTROL_BASE_MAIN_INFO_OPTARG_RESULT, \
    XOS_APP_CONSOLE_PROTOCOL_POWER_CONTROL_BASE_MAIN_INFO_OPTVAL_C}, \

#define XOS_APP_CONSOLE_PROTOCOL_POWER_CONTROL_BASE_MAIN_RESTART_OPT "restart"
#define XOS_APP_CONSOLE_PROTOCOL_POWER_CONTROL_BASE_MAIN_RESTART_OPTARG_REQUIRED MAIN_OPT_ARGUMENT_NONE
#define XOS_APP_CONSOLE_PROTOCOL_POWER_CONTROL_BASE_MAIN_RESTART_OPTARG_RESULT 0
#define XOS_APP_CONSOLE_PROTOCOL_POWER_CONTROL_BASE_MAIN_RESTART_OPTARG ""
#define XOS_APP_CONSOLE_PROTOCOL_POWER_CONTROL_BASE_MAIN_RESTART_OPTUSE "switch restart"
#define XOS_APP_CONSOLE_PROTOCOL_POWER_CONTROL_BASE_MAIN_RESTART_OPTVAL_S "R"
#define XOS_APP_CONSOLE_PROTOCOL_POWER_CONTROL_BASE_MAIN_RESTART_OPTVAL_C 'R'
#define XOS_APP_CONSOLE_PROTOCOL_POWER_CONTROL_BASE_MAIN_RESTART_OPTION \
   {XOS_APP_CONSOLE_PROTOCOL_POWER_CONTROL_BASE_MAIN_RESTART_OPT, \
    XOS_APP_CONSOLE_PROTOCOL_POWER_CONTROL_BASE_MAIN_RESTART_OPTARG_REQUIRED, \
    XOS_APP_CONSOLE_PROTOCOL_POWER_CONTROL_BASE_MAIN_RESTART_OPTARG_RESULT, \
    XOS_APP_CONSOLE_PROTOCOL_POWER_CONTROL_BASE_MAIN_RESTART_OPTVAL_C}, \

#define XOS_APP_CONSOLE_PROTOCOL_POWER_CONTROL_BASE_MAIN_STOP_OPT "stop"
#define XOS_APP_CONSOLE_PROTOCOL_POWER_CONTROL_BASE_MAIN_STOP_OPTARG_REQUIRED MAIN_OPT_ARGUMENT_NONE
#define XOS_APP_CONSOLE_PROTOCOL_POWER_CONTROL_BASE_MAIN_STOP_OPTARG_RESULT 0
#define XOS_APP_CONSOLE_PROTOCOL_POWER_CONTROL_BASE_MAIN_STOP_OPTARG ""
#define XOS_APP_CONSOLE_PROTOCOL_POWER_CONTROL_BASE_MAIN_STOP_OPTUSE "switch stop"
#define XOS_APP_CONSOLE_PROTOCOL_POWER_CONTROL_BASE_MAIN_STOP_OPTVAL_S "T"
#define XOS_APP_CONSOLE_PROTOCOL_POWER_CONTROL_BASE_MAIN_STOP_OPTVAL_C 'T'
#define XOS_APP_CONSOLE_PROTOCOL_POWER_CONTROL_BASE_MAIN_STOP_OPTION \
   {XOS_APP_CONSOLE_PROTOCOL_POWER_CONTROL_BASE_MAIN_STOP_OPT, \
    XOS_APP_CONSOLE_PROTOCOL_POWER_CONTROL_BASE_MAIN_STOP_OPTARG_REQUIRED, \
    XOS_APP_CONSOLE_PROTOCOL_POWER_CONTROL_BASE_MAIN_STOP_OPTARG_RESULT, \
    XOS_APP_CONSOLE_PROTOCOL_POWER_CONTROL_BASE_MAIN_STOP_OPTVAL_C}, \

///////////////////////////////////////////////////////////////////////
#define XOS_APP_CONSOLE_PROTOCOL_POWER_CONTROL_BASE_MAIN_CONTROL_OPTIONS_CHARS_EXTEND \
    XOS_APP_CONSOLE_PROTOCOL_POWER_CONTROL_BASE_MAIN_ON_OPTVAL_S \
    XOS_APP_CONSOLE_PROTOCOL_POWER_CONTROL_BASE_MAIN_OFF_OPTVAL_S \
    XOS_APP_CONSOLE_PROTOCOL_POWER_CONTROL_BASE_MAIN_STATE_OPTVAL_S \
    XOS_APP_CONSOLE_PROTOCOL_POWER_CONTROL_BASE_MAIN_INFO_OPTVAL_S \
    XOS_APP_CONSOLE_PROTOCOL_POWER_CONTROL_BASE_MAIN_RESTART_OPTVAL_S \
    XOS_APP_CONSOLE_PROTOCOL_POWER_CONTROL_BASE_MAIN_STOP_OPTVAL_S \

#define XOS_APP_CONSOLE_PROTOCOL_POWER_CONTROL_BASE_MAIN_CONTROL_OPTIONS_OPTIONS_EXTEND \
    XOS_APP_CONSOLE_PROTOCOL_POWER_CONTROL_BASE_MAIN_ON_OPTION \
    XOS_APP_CONSOLE_PROTOCOL_POWER_CONTROL_BASE_MAIN_OFF_OPTION \
    XOS_APP_CONSOLE_PROTOCOL_POWER_CONTROL_BASE_MAIN_STATE_OPTION \
    XOS_APP_CONSOLE_PROTOCOL_POWER_CONTROL_BASE_MAIN_INFO_OPTION \
    XOS_APP_CONSOLE_PROTOCOL_POWER_CONTROL_BASE_MAIN_RESTART_OPTION \
    XOS_APP_CONSOLE_PROTOCOL_POWER_CONTROL_BASE_MAIN_STOP_OPTION \

///////////////////////////////////////////////////////////////////////
#define XOS_APP_CONSOLE_PROTOCOL_POWER_CONTROL_BASE_MAIN_OPTIONS_CHARS_EXTEND \

#define XOS_APP_CONSOLE_PROTOCOL_POWER_CONTROL_BASE_MAIN_OPTIONS_OPTIONS_EXTEND \

///////////////////////////////////////////////////////////////////////
#define XOS_APP_CONSOLE_PROTOCOL_POWER_CONTROL_BASE_MAIN_OPTIONS_CHARS \
   XOS_APP_CONSOLE_PROTOCOL_POWER_CONTROL_BASE_MAIN_OPTIONS_CHARS_EXTEND \
   XOS_APP_CONSOLE_PROTOCOL_CRLF_BASE_MAIN_OPTIONS_CHARS \

#define XOS_APP_CONSOLE_PROTOCOL_POWER_CONTROL_BASE_MAIN_OPTIONS_OPTIONS \
   XOS_APP_CONSOLE_PROTOCOL_POWER_CONTROL_BASE_MAIN_OPTIONS_OPTIONS_EXTEND \
   XOS_APP_CONSOLE_PROTOCOL_CRLF_BASE_MAIN_OPTIONS_OPTIONS \

///////////////////////////////////////////////////////////////////////
#define XOS_APP_CONSOLE_PROTOCOL_POWER_CONTROL_BASE_MAIN_ARGS 0
#define XOS_APP_CONSOLE_PROTOCOL_POWER_CONTROL_BASE_MAIN_ARGV 0,

namespace xos {
namespace app {
namespace console {
namespace protocol {
namespace power {
namespace control {
namespace base {

/// class main_optt
template 
<class TExtends = xos::app::console::protocol::crlf::base::maint<>,  class TImplements = typename TExtends::implements>

class main_optt: virtual public TImplements, public TExtends {
public:
    typedef TImplements implements;
    typedef TExtends extends;
    typedef main_optt derives;

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
    main_optt(): run_(0) {
    }
    virtual ~main_optt() {
    }
private:
    main_optt(const main_optt &copy) {
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
    //////////////////////////////////////////////////////////////////////////

    //////////////////////////////////////////////////////////////////////////
    /// on...on_option...
    virtual int on_set_on_option
    (const char_t* optarg, int optind, int argc, char_t**argv, char_t**env) {
        int err = 0;
        return err;
    }
    virtual int on_on_option_set
    (const char_t* optarg, int optind, int argc, char_t**argv, char_t**env) {
        int err = 0;
        return err;
    }
    virtual int on_on_option
    (int optval, const char_t* optarg, const char_t* optname,
     int optind, int argc, char_t**argv, char_t**env) {
        int err = 0;
        if (!(err = on_set_on_option(optarg, optind, argc, argv, env))) {
            if (!(err = on_on_option_set(optarg, optind, argc, argv, env))) {
            } else {
            }
        } else {
        }
        return err;
    }
    virtual const char_t* on_option_usage(const char_t*& optarg, const struct option* longopt) {
        const char_t* chars = XOS_APP_CONSOLE_PROTOCOL_POWER_CONTROL_BASE_MAIN_ON_OPTUSE;
        optarg = XOS_APP_CONSOLE_PROTOCOL_POWER_CONTROL_BASE_MAIN_ON_OPTARG;
        return chars;
    }
    //////////////////////////////////////////////////////////////////////////
    /// on...off_option...
    virtual int on_set_off_option
    (const char_t* optarg, int optind, int argc, char_t**argv, char_t**env) {
        int err = 0;
        return err;
    }
    virtual int on_off_option_set
    (const char_t* optarg, int optind, int argc, char_t**argv, char_t**env) {
        int err = 0;
        return err;
    }
    virtual int on_off_option
    (int optval, const char_t* optarg, const char_t* optname,
     int optind, int argc, char_t**argv, char_t**env) {
        int err = 0;
        if (!(err = on_set_off_option(optarg, optind, argc, argv, env))) {
            if (!(err = on_off_option_set(optarg, optind, argc, argv, env))) {
            } else {
            }
        } else {
        }
        return err;
    }
    virtual const char_t* off_option_usage(const char_t*& optarg, const struct option* longopt) {
        const char_t* chars = XOS_APP_CONSOLE_PROTOCOL_POWER_CONTROL_BASE_MAIN_OFF_OPTUSE;
        optarg = XOS_APP_CONSOLE_PROTOCOL_POWER_CONTROL_BASE_MAIN_OFF_OPTARG;
        return chars;
    }
    //////////////////////////////////////////////////////////////////////////
    /// on...state_option...
    virtual int on_set_state_option
    (const char_t* optarg, int optind, int argc, char_t**argv, char_t**env) {
        int err = 0;
        return err;
    }
    virtual int on_state_option_set
    (const char_t* optarg, int optind, int argc, char_t**argv, char_t**env) {
        int err = 0;
        return err;
    }
    virtual int on_state_option
    (int optval, const char_t* optarg, const char_t* optname,
     int optind, int argc, char_t**argv, char_t**env) {
        int err = 0;
        if (!(err = on_set_state_option(optarg, optind, argc, argv, env))) {
            if (!(err = on_state_option_set(optarg, optind, argc, argv, env))) {
            } else {
            }
        } else {
        }
        return err;
    }
    virtual const char_t* state_option_usage(const char_t*& optarg, const struct option* longopt) {
        const char_t* chars = XOS_APP_CONSOLE_PROTOCOL_POWER_CONTROL_BASE_MAIN_STATE_OPTUSE;
        optarg = XOS_APP_CONSOLE_PROTOCOL_POWER_CONTROL_BASE_MAIN_STATE_OPTARG;
        return chars;
    }
    //////////////////////////////////////////////////////////////////////////
    /// on...info_option...
    virtual int on_set_info_option
    (const char_t* optarg, int optind, int argc, char_t**argv, char_t**env) {
        int err = 0;
        return err;
    }
    virtual int on_info_option_set
    (const char_t* optarg, int optind, int argc, char_t**argv, char_t**env) {
        int err = 0;
        return err;
    }
    virtual int on_info_option
    (int optval, const char_t* optarg, const char_t* optname,
     int optind, int argc, char_t**argv, char_t**env) {
        int err = 0;
        if (!(err = on_set_info_option(optarg, optind, argc, argv, env))) {
            if (!(err = on_info_option_set(optarg, optind, argc, argv, env))) {
            } else {
            }
        } else {
        }
        return err;
    }
    virtual const char_t* info_option_usage(const char_t*& optarg, const struct option* longopt) {
        const char_t* chars = XOS_APP_CONSOLE_PROTOCOL_POWER_CONTROL_BASE_MAIN_INFO_OPTUSE;
        optarg = XOS_APP_CONSOLE_PROTOCOL_POWER_CONTROL_BASE_MAIN_INFO_OPTARG;
        return chars;
    }
    //////////////////////////////////////////////////////////////////////////
    /// on...restart_option...
    virtual int on_set_restart_option
    (const char_t* optarg, int optind, int argc, char_t**argv, char_t**env) {
        int err = 0;
        return err;
    }
    virtual int on_restart_option_set
    (const char_t* optarg, int optind, int argc, char_t**argv, char_t**env) {
        int err = 0;
        return err;
    }
    virtual int on_restart_option
    (int optval, const char_t* optarg, const char_t* optname,
     int optind, int argc, char_t**argv, char_t**env) {
        int err = 0;
        if (!(err = on_set_restart_option(optarg, optind, argc, argv, env))) {
            if (!(err = on_restart_option_set(optarg, optind, argc, argv, env))) {
            } else {
            }
        } else {
        }
        return err;
    }
    virtual const char_t* restart_option_usage(const char_t*& optarg, const struct option* longopt) {
        const char_t* chars = XOS_APP_CONSOLE_PROTOCOL_POWER_CONTROL_BASE_MAIN_RESTART_OPTUSE;
        optarg = XOS_APP_CONSOLE_PROTOCOL_POWER_CONTROL_BASE_MAIN_RESTART_OPTARG;
        return chars;
    }
    //////////////////////////////////////////////////////////////////////////
    /// on...stop_option...
    virtual int on_set_stop_option
    (const char_t* optarg, int optind, int argc, char_t**argv, char_t**env) {
        int err = 0;
        return err;
    }
    virtual int on_stop_option_set
    (const char_t* optarg, int optind, int argc, char_t**argv, char_t**env) {
        int err = 0;
        return err;
    }
    virtual int on_stop_option
    (int optval, const char_t* optarg, const char_t* optname,
     int optind, int argc, char_t**argv, char_t**env) {
        int err = 0;
        if (!(err = on_set_stop_option(optarg, optind, argc, argv, env))) {
            if (!(err = on_stop_option_set(optarg, optind, argc, argv, env))) {
            } else {
            }
        } else {
        }
        return err;
    }
    virtual const char_t* stop_option_usage(const char_t*& optarg, const struct option* longopt) {
        const char_t* chars = XOS_APP_CONSOLE_PROTOCOL_POWER_CONTROL_BASE_MAIN_STOP_OPTUSE;
        optarg = XOS_APP_CONSOLE_PROTOCOL_POWER_CONTROL_BASE_MAIN_STOP_OPTARG;
        return chars;
    }
    //////////////////////////////////////////////////////////////////////////

    //////////////////////////////////////////////////////////////////////////
    /// on_option
    virtual int on_option
    (int optval, const char_t* optarg, const char_t* optname,
     int optind, int argc, char_t**argv, char_t**env) {
        int err = 0;
        switch(optval) {

        case XOS_APP_CONSOLE_PROTOCOL_POWER_CONTROL_BASE_MAIN_ON_OPTVAL_C:
            err = this->on_on_option(optval, optarg, optname, optind, argc, argv, env);
            break;
        case XOS_APP_CONSOLE_PROTOCOL_POWER_CONTROL_BASE_MAIN_OFF_OPTVAL_C:
            err = this->on_off_option(optval, optarg, optname, optind, argc, argv, env);
            break;
        case XOS_APP_CONSOLE_PROTOCOL_POWER_CONTROL_BASE_MAIN_STATE_OPTVAL_C:
            err = this->on_state_option(optval, optarg, optname, optind, argc, argv, env);
            break;
        case XOS_APP_CONSOLE_PROTOCOL_POWER_CONTROL_BASE_MAIN_INFO_OPTVAL_C:
            err = this->on_info_option(optval, optarg, optname, optind, argc, argv, env);
            break;
        case XOS_APP_CONSOLE_PROTOCOL_POWER_CONTROL_BASE_MAIN_RESTART_OPTVAL_C:
            err = this->on_restart_option(optval, optarg, optname, optind, argc, argv, env);
            break;
        case XOS_APP_CONSOLE_PROTOCOL_POWER_CONTROL_BASE_MAIN_STOP_OPTVAL_C:
            err = this->on_stop_option(optval, optarg, optname, optind, argc, argv, env);
            break;
        
        default:
            err = extends::on_option(optval, optarg, optname, optind, argc, argv, env);
        }
        return err;
    }
    //////////////////////////////////////////////////////////////////////////
    /// option_usage
    virtual const char_t* option_usage(const char_t*& optarg, const struct option* longopt) {
        const char_t* chars = "";
        switch(longopt->val) {

        case XOS_APP_CONSOLE_PROTOCOL_POWER_CONTROL_BASE_MAIN_ON_OPTVAL_C:
            chars = this->on_option_usage(optarg, longopt);
            break;
        case XOS_APP_CONSOLE_PROTOCOL_POWER_CONTROL_BASE_MAIN_OFF_OPTVAL_C:
            chars = this->off_option_usage(optarg, longopt);
            break;
        case XOS_APP_CONSOLE_PROTOCOL_POWER_CONTROL_BASE_MAIN_STATE_OPTVAL_C:
            chars = this->state_option_usage(optarg, longopt);
            break;
        case XOS_APP_CONSOLE_PROTOCOL_POWER_CONTROL_BASE_MAIN_INFO_OPTVAL_C:
            chars = this->info_option_usage(optarg, longopt);
            break;
        case XOS_APP_CONSOLE_PROTOCOL_POWER_CONTROL_BASE_MAIN_RESTART_OPTVAL_C:
            chars = this->restart_option_usage(optarg, longopt);
            break;
        case XOS_APP_CONSOLE_PROTOCOL_POWER_CONTROL_BASE_MAIN_STOP_OPTVAL_C:
            chars = this->stop_option_usage(optarg, longopt);
            break;
        
        default:
            chars = extends::option_usage(optarg, longopt);
            break;
        }
        return chars;
    }
    //////////////////////////////////////////////////////////////////////////
    /// options
    virtual const char_t* options(const struct option*& longopts) {
        static const char_t* chars = XOS_APP_CONSOLE_PROTOCOL_POWER_CONTROL_BASE_MAIN_OPTIONS_CHARS;
        static struct option optstruct[]= {
            XOS_APP_CONSOLE_PROTOCOL_POWER_CONTROL_BASE_MAIN_OPTIONS_OPTIONS
            {0, 0, 0, 0}};
        longopts = optstruct;
        return chars;
    }
    /// arguments
    virtual const char_t* arguments(const char_t**& argv) {
        static const char_t* _args = XOS_APP_CONSOLE_PROTOCOL_POWER_CONTROL_BASE_MAIN_ARGS;
        static const char_t* _argv[] = {
            XOS_APP_CONSOLE_PROTOCOL_POWER_CONTROL_BASE_MAIN_ARGV
            0};
        argv = _argv;
        return _args;
    }
    //////////////////////////////////////////////////////////////////////////

    //////////////////////////////////////////////////////////////////////////
protected:
}; /// class main_optt 
typedef main_optt<> main_opt;

} /// namespace base 
} /// namespace control 
} /// namespace power 
} /// namespace protocol 
} /// namespace console 
} /// namespace app 
} /// namespace xos 

#endif /// ndef XOS_APP_CONSOLE_PROTOCOL_POWER_CONTROL_BASE_MAIN_OPT_HPP
