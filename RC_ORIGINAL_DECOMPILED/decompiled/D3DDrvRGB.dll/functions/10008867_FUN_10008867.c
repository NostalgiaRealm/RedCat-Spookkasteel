/*
 * FUN_10008867 at 10008867
 * undefined4 * __cdecl FUN_10008867(LPCSTR param_1, char * param_2, uint param_3)
 * Address ranges: 10008867-10008897
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 * __cdecl FUN_10008867(LPCSTR param_1,char *param_2,uint param_3)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  
  puVar1 = FUN_1000a757();
  if (puVar1 == (undefined4 *)0x0) {
    return (undefined4 *)0x0;
  }
  puVar2 = FUN_1000a5e7(param_1,param_2,param_3,puVar1);
  FUN_10009a92((uint)puVar1);
  return puVar2;
}

