/*
 * FUN_0048222c at 0048222c
 * undefined __register FUN_0048222c(int param_1)
 * Address ranges: 0048222c-004822ba
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_0048222c(int param_1)

{
  int iVar1;
  int *piVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  
  if (*(int *)(param_1 + 4) != 0) {
    iVar1 = FUN_00419530(*(int *)(param_1 + 4));
    if (-1 < iVar1 + -1) {
      iVar5 = 0;
      do {
        piVar2 = (int *)FUN_00419504(*(int *)(param_1 + 4),iVar5);
        uVar3 = FUN_0040320c(piVar2,(int)&PTR_FUN_0047e718);
        if ((char)uVar3 == '\0') {
LAB_00482285:
          uVar3 = FUN_0040320c(piVar2,(int)&PTR_FUN_0047d7a0);
          if ((char)uVar3 != '\0') {
            iVar4 = FUN_00409870((undefined *)piVar2[0x21],*(undefined **)(param_1 + 0x48));
            if (iVar4 != 0) {
              FUN_00483bac(piVar2,*(uint **)(param_1 + 0x48));
            }
          }
        }
        else {
          iVar4 = FUN_00409870((undefined *)piVar2[0x8d],*(undefined **)(param_1 + 0x48));
          if (iVar4 == 0) goto LAB_00482285;
          FUN_0048794c(piVar2,*(undefined4 **)(param_1 + 0x48));
        }
        iVar5 = iVar5 + 1;
        iVar1 = iVar1 + -1;
      } while (iVar1 != 0);
    }
  }
  return;
}

