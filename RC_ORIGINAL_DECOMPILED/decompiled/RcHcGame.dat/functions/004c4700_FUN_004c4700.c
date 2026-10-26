/*
 * FUN_004c4700 at 004c4700
 * undefined FUN_004c4700(void)
 * Address ranges: 004c4700-004c4775
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __fastcall FUN_004c4700(int param_1)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  
  if (((*(int *)(param_1 + 4) == 0) ||
      (cVar1 = *(char *)(*(int *)(param_1 + 4) + -1), cVar1 == '\0')) || (cVar1 == -1))
  goto LAB_004c4768;
  uVar2 = *(uint *)(param_1 + 8);
  if (0xfffffffd < uVar2) {
    FUN_005fe5fb();
  }
  iVar3 = *(int *)(param_1 + 4);
  if (((iVar3 == 0) || (cVar1 = *(char *)(iVar3 + -1), cVar1 == '\0')) || (cVar1 == -1)) {
    if (uVar2 == 0) {
      if (iVar3 != 0) {
        FUN_00404190(0);
      }
      goto LAB_004c4768;
    }
    if (uVar2 <= *(uint *)(param_1 + 0xc)) goto LAB_004c4768;
  }
  else if (uVar2 == 0) {
    *(char *)(iVar3 + -1) = cVar1 + -1;
    *(undefined4 *)(param_1 + 4) = 0;
    *(undefined4 *)(param_1 + 8) = 0;
    *(undefined4 *)(param_1 + 0xc) = 0;
    goto LAB_004c4768;
  }
  FUN_00401a60(uVar2);
LAB_004c4768:
  if (*(int *)(param_1 + 4) != 0) {
    *(undefined1 *)(*(int *)(param_1 + 4) + -1) = 0xff;
  }
  return;
}

