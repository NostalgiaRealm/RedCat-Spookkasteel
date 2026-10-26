/*
 * FUN_0056c860 at 0056c860
 * undefined FUN_0056c860(void)
 * Address ranges: 0056c860-0056c896
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_0056c860(undefined4 param_1,int param_2,undefined4 param_3)

{
  undefined1 *puVar1;
  
  puVar1 = *(undefined1 **)(param_2 + 4);
  if (puVar1 == (undefined1 *)0x0) {
    puVar1 = &DAT_0064a3b4;
  }
  FUN_005ae390(param_1,s_Portrait_s_04d_bmp_006a43e0,puVar1,param_3);
  return param_1;
}

