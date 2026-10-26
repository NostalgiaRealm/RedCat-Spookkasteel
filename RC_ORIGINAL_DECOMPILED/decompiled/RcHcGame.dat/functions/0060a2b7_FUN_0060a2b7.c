/*
 * FUN_0060a2b7 at 0060a2b7
 * undefined FUN_0060a2b7(void)
 * Address ranges: 0060a2b7-0060a323;0060a327-0060a32b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_0060a2b7(int param_1,int param_2,undefined4 param_3)

{
  undefined4 uVar1;
  
  if ((*(uint *)(param_1 + 4) & 0x66) != 0) {
    *(undefined4 *)(param_2 + 0x24) = 1;
    return 1;
  }
  FUN_0060f904(param_1,*(undefined4 *)(param_2 + 0xc),param_3,0,*(undefined4 *)(param_2 + 8),
               *(undefined4 *)(param_2 + 0x10),*(undefined4 *)(param_2 + 0x14),1);
  if (*(int *)(param_2 + 0x24) == 0) {
    FUN_0060a105(param_2,param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x0060a321. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (**(code **)(param_2 + 0x18))();
  return uVar1;
}

