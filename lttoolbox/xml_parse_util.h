/*
 * Copyright (C) 2005 Universitat d'Alacant / Universidad de Alicante
 *
 * This program is free software; you can redistribute it and/or
 * modify it under the terms of the GNU General Public License as
 * published by the Free Software Foundation; either version 2 of the
 * License, or (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful, but
 * WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
 * General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, see <https://www.gnu.org/licenses/>.
 */
#ifndef _XMLPARSEUTIL_
#define _XMLPARSEUTIL_

#include <libxml/encoding.h>
#include <libxml/xmlreader.h>
#include <string>
#include <cwchar>

using namespace std;

class XMLParseUtil
{
public:

  /* If attrib does not exist (or other error), returns an empty string: */
  static wstring attrib(xmlTextReaderPtr reader, wstring const &name);

  /* If attrib does not exist (or other error), returns fallback: */
  static wstring attrib(xmlTextReaderPtr reader, wstring const &name, const wstring fallback);

  static string latin1(xmlChar const * input); // mark for deletion
  static wstring towstring(xmlChar const * input);
  static wstring stows(string const &str);
};

#endif
