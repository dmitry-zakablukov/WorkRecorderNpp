// 
// OperationCodesUtils.h
//
// This file is part of Work Recorder plugin for Notepad++.
// Copyright (c) Dmitry Zakablukov, 2013-2017.
// E-mail: dmitriy.zakablukov@gmail.com
// Web: https://github.com/dmitry-zakablukov/WorkRecorderNpp
//
// Work Recorder plugin is free software: you can redistribute it and/or modify
// it under the terms of the GNU General Public License as published by
// the Free Software Foundation, either version 3 of the License, or
// (at your option) any later version.
// 
// Work Recorder plugin is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU General Public License for more details.
// 
// You should have received a copy of the GNU General Public License
// along with Work Recorder plugin. If not, see <http://www.gnu.org/licenses/>.
//

#pragma once

class OperationCodesUtils
{
public:
    static void format(ostream& output, OpCodeInfo* opCode);
    static OpCodeInfo parse(istream& input);

    static bool hasOppositeCode(OperationCode code);
    static OperationCode getOppositeCode(OperationCode code);

    static const uint numMaxIntegerSize;
    static const uint numMaxStringSize;

private:
    static unordered_map<OperationCode, OperationCode> oppositeOperationCodes;
};
