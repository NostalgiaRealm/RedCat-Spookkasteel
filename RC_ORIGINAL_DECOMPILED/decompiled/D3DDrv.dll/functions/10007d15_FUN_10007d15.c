/*
 * FUN_10007d15 at 10007d15
 * undefined4 * __cdecl FUN_10007d15(LPCSTR param_1, char * param_2, uint param_3)
 * Address ranges: 10007d15-10007d45
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 * __cdecl FUN_10007d15(LPCSTR param_1,char *param_2,uint param_3)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  
  puVar1 = FUN_100096ae();
  if (puVar1 == (undefined4 *)0x0) {
    return (undefined4 *)0x0;
  }
  puVar2 = FUN_1000953e(param_1,param_2,param_3,puVar1);
  FUN_100089e9((uint)puVar1);
  return puVar2;
}

