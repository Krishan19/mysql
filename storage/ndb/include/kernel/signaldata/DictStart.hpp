/* Copyright (C) 2003 MySQL AB

   This program is free software; you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation; version 2 of the License.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program; if not, write to the Free Software
   Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA  02110-1301, USA */

#ifndef DICT_START_HPP
#define DICT_START_HPP

class DictStartReq {
  /**
   * Sender(s)
   */
  friend class Dbdih;
  /**
   * Receiver(s)
   */
  friend class Dbdict;

public:
  STATIC_CONST( SignalLength = 2 );
private:
  
  Uint32 restartGci;
  Uint32 senderRef;
};

class DictStartConf {
  /**
   * Sender(s)
   */
  friend class Dbdict;
  /**
   * Receiver(s)
   */
  friend class Dbdih;
  
public:
private:
  
  Uint32 startingNodeId;
  Uint32 startWord;
};
#endif
