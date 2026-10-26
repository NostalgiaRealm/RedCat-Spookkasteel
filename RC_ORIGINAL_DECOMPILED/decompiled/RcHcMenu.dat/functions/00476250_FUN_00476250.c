/*
 * FUN_00476250 at 00476250
 * undefined4 __register FUN_00476250(int param_1, undefined4 * param_2, uint param_3)
 * Address ranges: 00476250-00476279
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_00476250(int param_1,undefined4 *param_2,uint param_3)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  
  puVar2 = (undefined4 *)FUN_00475bec(param_1,*(int *)(param_1 + 0x38),param_3);
  FUN_00402944(param_2,puVar2,param_3);
  uVar1 = *(undefined4 *)(param_1 + 0x40);
  *(int *)(param_1 + 0x40) = *(int *)(param_1 + 0x40) + param_3;
  return uVar1;
}

