/*
 * FUN_005adc90 at 005adc90
 * undefined FUN_005adc90(void)
 * Address ranges: 005adc90-005adcd8
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

uint FUN_005adc90(int param_1)

{
  undefined1 *puVar1;
  uint uVar2;
  uint uVar3;
  
  uVar3 = 0;
  if (*(int *)(param_1 + 8) != 0) {
    do {
      if (*(int *)(param_1 + 4) == 0) {
        puVar1 = &DAT_0064a3b4;
      }
      else {
        puVar1 = (undefined1 *)(*(int *)(param_1 + 4) + uVar3);
      }
      uVar2 = FUN_005ad6c0(CONCAT31((int3)((uint)puVar1 >> 8),*puVar1));
      if ((char)uVar2 == '\0') {
        return uVar2 & 0xffffff00;
      }
      uVar3 = uVar3 + 1;
    } while (uVar3 < *(uint *)(param_1 + 8));
  }
  return (uint)(*(int *)(param_1 + 8) != 0);
}

