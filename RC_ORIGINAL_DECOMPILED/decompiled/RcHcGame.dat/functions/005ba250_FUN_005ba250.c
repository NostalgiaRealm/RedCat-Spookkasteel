/*
 * FUN_005ba250 at 005ba250
 * undefined FUN_005ba250(void)
 * Address ranges: 005ba250-005ba3fa
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_005ba250(undefined4 param_1,int param_2)

{
  int iVar1;
  undefined1 *puVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  int iVar6;
  undefined4 *puVar7;
  int in_stack_00001214;
  int in_stack_00001218;
  int *in_stack_00001220;
  int in_stack_00001224;
  
  FUN_0060df70();
  if (-1 < *(int *)(*(int *)(DAT_006cc41c + 0x18) + 0xf4 + in_stack_00001218 * 4)) {
    puVar2 = (undefined1 *)(in_stack_00001218 * 0x30 + in_stack_00001214);
    puVar3 = (undefined4 *)((in_stack_00001218 * 3 + 9) * 0x20 + in_stack_00001214);
    iVar6 = 0;
    param_1 = 4;
    if (0 < *in_stack_00001220) {
      do {
        iVar1 = FUN_005d0d60();
        if (iVar1 == 0) {
          return;
        }
        if (puVar2 == &stack0x00000010) {
          puVar2 = &stack0x00000310;
          puVar3 = (undefined4 *)&stack0x00000c10;
        }
        else {
          puVar2 = &stack0x00000010;
          puVar3 = (undefined4 *)&stack0x00000610;
        }
        iVar6 = iVar6 + 1;
      } while (iVar6 < *in_stack_00001220);
      param_1 = param_2;
      if (param_2 < 3) {
        return;
      }
    }
    iVar6 = *(int *)(in_stack_00001224 + 0x10c);
    *(int *)(in_stack_00001224 + 0x980 + iVar6 * 4) = param_1;
    puVar7 = (undefined4 *)(iVar6 * 0xf0 + 0x3e0 + in_stack_00001224);
    *(int *)(in_stack_00001224 + 0x998 + *(int *)(in_stack_00001224 + 0x10c) * 4) =
         in_stack_00001218;
    if (0 < param_1) {
      do {
        FUN_005b35b0();
        puVar4 = puVar3;
        puVar5 = puVar7;
        for (iVar6 = 6; iVar6 != 0; iVar6 = iVar6 + -1) {
          *puVar5 = *puVar4;
          puVar4 = puVar4 + 1;
          puVar5 = puVar5 + 1;
        }
        puVar3 = puVar3 + 6;
        puVar7 = puVar7 + 6;
        param_1 = param_1 + -1;
      } while (param_1 != 0);
    }
    *(int *)(in_stack_00001224 + 0x10c) = *(int *)(in_stack_00001224 + 0x10c) + 1;
  }
  return;
}

