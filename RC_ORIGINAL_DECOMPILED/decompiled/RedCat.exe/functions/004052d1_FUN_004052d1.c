/*
 * FUN_004052d1 at 004052d1
 * char * __cdecl FUN_004052d1(int param_1, LPCSTR param_2, undefined4 * param_3, char * param_4)
 * Address ranges: 004052d1-00405321
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

char * __cdecl FUN_004052d1(int param_1,LPCSTR param_2,undefined4 *param_3,char *param_4)

{
  int iVar1;
  char *pcVar2;
  
  iVar1 = FUN_00405618(param_3,(undefined4 *)param_4,&param_4,&param_3);
  if (iVar1 == -1) {
    return (char *)0xffffffff;
  }
  pcVar2 = FUN_00405439(param_1,param_2,param_4,param_3);
  FUN_00403677(param_4);
  FUN_00403677(param_3);
  return pcVar2;
}

