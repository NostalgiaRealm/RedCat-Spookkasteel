/*
 * FUN_005932b0 at 005932b0
 * undefined FUN_005932b0(void)
 * Address ranges: 005932b0-005933a0
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __fastcall FUN_005932b0(int param_1)

{
  char cVar1;
  char *pcVar2;
  undefined1 *puVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  char *pcVar8;
  
  if (*(int *)(param_1 + 0x300) == 0) {
    return;
  }
  uVar7 = *(int *)(param_1 + 0x300) - 1;
  if (*(uint *)(param_1 + 0x300) < uVar7) {
    FUN_005fe747();
  }
  pcVar2 = *(char **)(param_1 + 0x2fc);
  if (((pcVar2 != (char *)0x0) && (cVar1 = pcVar2[-1], cVar1 != '\0')) && (cVar1 != -1)) {
    uVar5 = 0xffffffff;
    pcVar2[-1] = cVar1 + -1;
    *(undefined4 *)(param_1 + 0x2fc) = 0;
    *(undefined4 *)(param_1 + 0x300) = 0;
    *(undefined4 *)(param_1 + 0x304) = 0;
    pcVar8 = pcVar2;
    do {
      if (uVar5 == 0) break;
      uVar5 = uVar5 - 1;
      cVar1 = *pcVar8;
      pcVar8 = pcVar8 + 1;
    } while (cVar1 != '\0');
    FUN_004040f0(pcVar2,~uVar5 - 1);
  }
  iVar4 = *(int *)(param_1 + 0x300) - uVar7;
  if (iVar4 == 0) {
    return;
  }
  iVar6 = *(int *)(param_1 + 0x2fc) + uVar7;
  FUN_0060ab50(iVar6,iVar6 + 1,iVar4 + -1);
  uVar7 = *(int *)(param_1 + 0x300) - 1;
  if (0xfffffffd < uVar7) {
    FUN_005fe5fb();
  }
  puVar3 = *(undefined1 **)(param_1 + 0x2fc);
  if (((puVar3 == (undefined1 *)0x0) || (cVar1 = puVar3[-1], cVar1 == '\0')) || (cVar1 == -1)) {
    if (uVar7 == 0) {
      if (puVar3 == (undefined1 *)0x0) {
        return;
      }
      *(undefined4 *)(param_1 + 0x300) = 0;
      *puVar3 = 0;
      return;
    }
    if (uVar7 <= *(uint *)(param_1 + 0x304)) goto LAB_00593392;
  }
  else if (uVar7 == 0) {
    puVar3[-1] = cVar1 + -1;
    FUN_004040a0(0);
    return;
  }
  FUN_00401a60(uVar7);
LAB_00593392:
  *(uint *)(param_1 + 0x300) = uVar7;
  *(undefined1 *)(*(int *)(param_1 + 0x2fc) + uVar7) = 0;
  return;
}

