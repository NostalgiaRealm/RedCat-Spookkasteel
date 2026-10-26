/*
 * FUN_00605583 at 00605583
 * undefined FUN_00605583(void)
 * Address ranges: 00605583-006055a6
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined2 __fastcall FUN_00605583(int *param_1)

{
  uint uVar1;
  undefined2 uVar2;
  undefined2 *puVar3;
  
  uVar1 = *(uint *)param_1[7];
  if ((uVar1 != 0) && (uVar1 < uVar1 + *(int *)param_1[0xb] * 2)) {
    puVar3 = (undefined2 *)FUN_006055a7();
    return *puVar3;
  }
  uVar2 = (**(code **)(*param_1 + 0x14))();
  return uVar2;
}

