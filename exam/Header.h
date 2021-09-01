#pragma once
#include <string>

String* CreateString(const char* source);



int const char* GetString(const String* str);

int GetStringLength(const String* str);
/**
 * @brief Check if we have strings
 *
 * @param check the len of the stringds .
 *
 * @return the strlen of the string (the length if the strings)
 */

int IsEmpty(const String* str);
/**
 * @brief Check if the string is empty
 *
 * @param also check if now empty
 *
 * @return  its empty otherwise itnot empty .
 */

int CompareString(const String* str1, const String* str2); // see strcmp()
/**
 * @brief Check the two string 
 *
 * @param comparing then 
 * @return  
 */


void CopyString(String* dst, const String* src); // don’t forget to take care of the old underlying string!
								
void CopyCString(String* dst, const char* src);
*/
