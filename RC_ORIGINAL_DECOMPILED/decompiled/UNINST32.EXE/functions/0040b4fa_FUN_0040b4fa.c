/*
 * FUN_0040b4fa at 0040b4fa
 * undefined __cdecl FUN_0040b4fa(LPSTR param_1, LPCSTR param_2)
 * Address ranges: 0040b4fa-0040b53e
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __cdecl FUN_0040b4fa(LPSTR param_1,LPCSTR param_2)

{
  char *pcVar1;
  int iVar2;
  
  do {
    lstrcpyA(param_1,param_2);
    pcVar1 = FUN_0040b53f(param_1);
    wsprintfA(pcVar1,s__GLU_04x_TMP_00412ed8,(uint)(ushort)DAT_00413704);
    DAT_00413704 = DAT_00413704 + 1;
    iVar2 = FUN_0040a933(param_1);
  } while (iVar2 == 0);
  return;
}

