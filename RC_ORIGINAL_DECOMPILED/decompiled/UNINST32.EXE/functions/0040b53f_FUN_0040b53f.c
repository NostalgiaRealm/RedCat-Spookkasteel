/*
 * FUN_0040b53f at 0040b53f
 * char * __cdecl FUN_0040b53f(LPCSTR param_1)
 * Address ranges: 0040b53f-0040b560
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

char * __cdecl FUN_0040b53f(LPCSTR param_1)

{
  int iVar1;
  char *pcVar2;
  
  iVar1 = lstrlenA(param_1);
  for (pcVar2 = param_1 + iVar1; (param_1 < pcVar2 && (*pcVar2 != '\\')); pcVar2 = pcVar2 + -1) {
  }
  if (*pcVar2 == '\\') {
    pcVar2 = pcVar2 + 1;
  }
  return pcVar2;
}

