/*****************************************************************************
 *
 *  Copyright (C) 2006-2017  Florian Pose, Ingenieurgemeinschaft IgH
 *
 *  This file is part of the IgH EtherCAT Master.
 *
 *  The IgH EtherCAT Master is free software; you can redistribute it and/or
 *  modify it under the terms of the GNU General Public License version 2, as
 *  published by the Free Software Foundation.
 *
 *  The IgH EtherCAT Master is distributed in the hope that it will be useful,
 *  but WITHOUT ANY WARRANTY; without even the implied warranty of
 *  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General
 *  Public License for more details.
 *
 *  You should have received a copy of the GNU General Public License along
 *  with the IgH EtherCAT Master; if not, write to the Free Software
 *  Foundation, Inc., 51 Franklin St, Fifth Floor, Boston, MA  02110-1301  USA
 *
 ****************************************************************************/

#ifndef __COMMANDCRC_H__
#define __COMMANDCRC_H__

#include "Command.h"
#include "DataTypeHandler.h"

/****************************************************************************/

class CommandCrc:
    public Command,
    public DataTypeHandler
{
    public:
        CommandCrc();

        string helpString(const string &) const;
        void execute(const StringVector &);
};

/****************************************************************************/

#endif
