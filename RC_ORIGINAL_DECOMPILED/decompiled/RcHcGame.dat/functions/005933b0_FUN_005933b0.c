/*
 * FUN_005933b0 at 005933b0
 * undefined FUN_005933b0(void)
 * Address ranges: 005933b0-00593447
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_005933b0(int param_1,undefined1 param_2)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  
  if (-*(int *)(param_1 + 0x300) - 1U < 2) {
    FUN_005fe5fb();
  }
  uVar3 = *(int *)(param_1 + 0x300) + 1;
  if (0xfffffffd < uVar3) {
    FUN_005fe5fb();
  }
  iVar2 = *(int *)(param_1 + 0x2fc);
  if (((iVar2 == 0) || (cVar1 = *(char *)(iVar2 + -1), cVar1 == '\0')) || (cVar1 == -1)) {
    if (uVar3 == 0) {
      if (iVar2 == 0) {
        return;
      }
      FUN_00404190(0);
      return;
    }
    if (uVar3 <= *(uint *)(param_1 + 0x304)) goto LAB_00593428;
  }
  else if (uVar3 == 0) {
    *(char *)(iVar2 + -1) = cVar1 + -1;
    *(undefined4 *)(param_1 + 0x2fc) = 0;
    *(undefined4 *)(param_1 + 0x300) = 0;
    *(undefined4 *)(param_1 + 0x304) = 0;
    return;
  }
  FUN_00401a60(uVar3);
LAB_00593428:
  *(undefined1 *)(*(int *)(param_1 + 0x300) + *(int *)(param_1 + 0x2fc)) = param_2;
  *(uint *)(param_1 + 0x300) = uVar3;
  *(undefined1 *)(uVar3 + *(int *)(param_1 + 0x2fc)) = 0;
  return;
}

