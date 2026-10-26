/*
 * FUN_0047394c at 0047394c
 * undefined4 __register FUN_0047394c(int * param_1)
 * Address ranges: 0047394c-00473983
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_0047394c(int *param_1)

{
  bool bVar1;
  undefined4 uVar2;
  
  if ((byte)(*(char *)((int)param_1 + 0x8d) - 1U) < 3) {
    bVar1 = FUN_004731cc((int)param_1);
    if (!bVar1) {
      uVar2 = FUN_004730d8((int)param_1);
      uVar2 = (**(code **)(*param_1 + 0x1b4))(param_1,uVar2);
      if ((char)uVar2 == '\0') {
        return CONCAT31((int3)((uint)uVar2 >> 8),1);
      }
    }
  }
  return 0;
}

