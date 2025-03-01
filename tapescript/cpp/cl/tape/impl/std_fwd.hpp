/*
Copyright (C) 2015-present CompatibL

This file is part of TapeScript (the "Software"), an open source library
for adjoint algorithmic differentiation (AAD), available from:

http://github.com/compatibl/tapescript (source)
http://www.tapescript.org (documentation)

The Software is distributed under multiple licenses. This distribution
is under the terms of the Apache License, Version 2.0 (the "License");
you may not use this file except in compliance with the License.
You may obtain a copy of the License at:

http://www.apache.org/licenses/LICENSE-2.0

Unless required by applicable law or agreed to in writing, software
distributed under the License is distributed on an "AS IS" BASIS,
WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
See the License for the specific language governing permissions and
limitations under the License.
*/

#ifndef cl_tape_impl_std_fwd_hpp
#define cl_tape_impl_std_fwd_hpp

namespace std
{
    template <typename Inner>
    inline cl::tape_wrapper<Inner> ceil(cl::tape_wrapper<Inner> x);

    template <typename Inner>
    inline cl::tape_wrapper<Inner> floor(cl::tape_wrapper<Inner> x);
}

#endif // cl_tape_impl_std_fwd_hpp
