/*
 * FUN_004072dc at 004072dc
 * char * __cdecl FUN_004072dc(char * param_1, char * param_2)
 * Address ranges: 004072dc-00407322
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

char * __cdecl FUN_004072dc(char *param_1,char *param_2)

{
  char cVar1;
  undefined1 *puVar2;
  
  for (; *param_2 == ' '; param_2 = param_2 + 1) {
  }
  cVar1 = *param_2;
  puVar2 = (undefined1 *)0x0;
  if (cVar1 != '\0') {
    do {
      if (cVar1 == '|') break;
      *param_1 = cVar1;
      puVar2 = (undefined1 *)(~-(uint)(cVar1 != ' ') & (uint)param_1);
      param_1 = param_1 + 1;
      param_2 = param_2 + 1;
      cVar1 = *param_2;
    } while (cVar1 != '\0');
    if (puVar2 != (undefined1 *)0x0) {
      *puVar2 = 0;
    }
  }
  *param_1 = '\0';
  if (*param_2 == '|') {
    param_2 = param_2 + 1;
  }
  return param_2;
}

