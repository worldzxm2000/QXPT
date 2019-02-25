/*
 * Licensed to the Apache Software Foundation (ASF) under one or more
 * contributor license agreements.  See the NOTICE file distributed with
 * this work for additional information regarding copyright ownership.
 * The ASF licenses this file to You under the Apache License, Version 2.0
 * (the "License"); you may not use this file except in compliance with
 * the License.  You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */
#ifndef _DECAF_LANG_EXCEPTIONS_UNSUPPORTEDOPERATIONEXCEPTION_H_
#define _DECAF_LANG_EXCEPTIONS_UNSUPPORTEDOPERATIONEXCEPTION_H_

#include <decaf/lang/Exception.h>

namespace decaf {
namespace lang {
namespace exceptions {

    /*
     * Thrown when an unsupported method is called or an operation cannot be performed
     * because it was not implemented.
     *
     * @since 1.0
     */
    class DECAF_API UnsupportedOperationException : public lang::Exception {
    public:

        /**
         * Default Constructor
         */
        UnsupportedOperationException();

        /**
         * Conversion Constructor from some other Exception
         * @param ex An exception that should become this type of Exception
         */
        UnsupportedOperationException(const Exception& ex);

        /**
         * Copy Constructor
         * @param ex An exception that should become this type of Exception
         */
        UnsupportedOperationException(const UnsupportedOperationException& ex);

        /**
         * Constructor - Initializes the file name and line number where
         * this message occurred.  Sets the message to report, using an
         * optional list of arguments to parse into the message
         * @param file The file name where exception occurs
         * @param lineNumber The line number where the exception occurred.
         * @param cause The exception that was the cause for this one to be thrown.
         * @param msg The message to report
         * @param ... list of primitives that are formatted into the message
         */
        UnsupportedOperationException(const char* file, const int lineNumber, const std::exception* cause, const char* msg, ...);

        /**
         * Constructor
         * @param cause Pointer to the exception that caused this one to
         * be thrown, the object is cloned caller retains ownership.
         */
        UnsupportedOperationException(const std::exception* cause);

        /**
         * Constructor - Initializes the file name and line number where
         * this message occurred.  Sets the message to report, using an
         * optional list of arguments to parse into the message
         * @param file The file name where exception occurs
         * @param lineNumber The line number where the exception occurred.
         * @param msg The message to report
         * @param ... list of primitives that are formatted into the message
         */
        UnsupportedOperationException(const char* file, const int lineNumber, const char* msg, ...);

        /**
         * Clones this exception.  This is useful for cases where you need
         * to preserve the type of the original exception as well as the message.
         * All subclasses should override.
         *
         * @return an new Exception instance that is a copy of this one.
         */
        virtual UnsupportedOperationException* clone() const {
            return new UnsupportedOperationException(*this);
        }

        virtual ~UnsupportedOperationException() throw();

    };

}}}

#endif /*_DECAF_LANG_EXCEPTIONS_UNSUPPORTEDOPERATIONEXCEPTION_H_*/
