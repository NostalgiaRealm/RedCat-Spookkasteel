/*
 * FUN_1001c860 at 1001c860
 * undefined FUN_1001c860(void)
 * Address ranges: 1001c860-1001c8c4
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_1001c860(uint param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  
  if ((param_1 < DAT_1020fd40) &&
     ((*(byte *)((&DAT_1020fc40)[(int)param_1 >> 5] + 4 + (param_1 & 0x1f) * 0x24) & 1) != 0)) {
    FUN_1001e10f(param_1);
    uVar1 = FUN_1001c8c5(param_1,param_2,param_3);
    FUN_1001e16e(param_1);
    return uVar1;
  }
  puVar2 = (undefined4 *)FUN_1001df01();
  *puVar2 = 9;
  puVar2 = (undefined4 *)FUN_1001df0a();
  *puVar2 = 0;
  return 0xffffffff;
}

