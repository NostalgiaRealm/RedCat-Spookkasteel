/*
 * FUN_10003f08 at 10003f08
 * undefined4 * __cdecl FUN_10003f08(LPCSTR param_1, char * param_2, uint param_3)
 * Address ranges: 10003f08-10003f38
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 * __cdecl FUN_10003f08(LPCSTR param_1,char *param_2,uint param_3)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  
  puVar1 = FUN_10004f25();
  if (puVar1 == (undefined4 *)0x0) {
    return (undefined4 *)0x0;
  }
  puVar2 = FUN_10004db5(param_1,param_2,param_3,puVar1);
  FUN_100044da((uint)puVar1);
  return puVar2;
}

