/*
 * FUN_006008a2 at 006008a2
 * undefined FUN_006008a2(void)
 * Address ranges: 006008a2-00600a5a
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_006008a2(void)

{
  char *pcVar1;
  char cVar2;
  int iVar3;
  undefined4 uVar4;
  char cVar5;
  undefined1 *puVar6;
  char *pcVar7;
  undefined1 uVar8;
  uint uVar9;
  char *pcVar10;
  int unaff_EBP;
  uint uVar11;
  int iVar12;
  undefined4 *unaff_FS_OFFSET;
  
  FUN_0060eb4c();
  pcVar10 = *(char **)(unaff_EBP + 0x14);
  cVar5 = *pcVar10;
  pcVar7 = pcVar10;
  cVar2 = cVar5;
  while (cVar2 != '\0') {
    if (cVar2 == cVar5) {
      *(int *)(unaff_EBP + 0x10) = *(int *)(unaff_EBP + 0x10) + 1;
    }
    pcVar1 = pcVar7 + 1;
    pcVar7 = pcVar7 + 1;
    cVar2 = *pcVar1;
  }
  *(undefined1 *)(unaff_EBP + -0x28) = *(undefined1 *)(unaff_EBP + 0x17);
  FUN_004040a0(0);
  FUN_005ae2a0(*(undefined4 *)(unaff_EBP + 0x10),0);
  *(undefined4 *)(unaff_EBP + -4) = 0;
  *(undefined4 *)(unaff_EBP + -0x18) = 0xfffffffe;
  *(undefined4 *)(unaff_EBP + -0x14) = 1;
  while( true ) {
    *(undefined1 *)(unaff_EBP + -0xd) = 0;
    uVar11 = 0;
    iVar12 = 0;
    if (*(int *)(unaff_EBP + 0x10) == 0) break;
    do {
      cVar5 = pcVar10[iVar12];
      if (cVar5 != '\0') {
        do {
          if (cVar5 == *pcVar10) break;
          cVar5 = pcVar10[iVar12 + 1];
          iVar12 = iVar12 + 1;
        } while (cVar5 != '\0');
      }
      if ((*(uint *)(unaff_EBP + -0x20) < uVar11) || (*(int *)(unaff_EBP + -0x24) == 0)) {
        pcVar7 = "";
      }
      else {
        FUN_004c4700();
        pcVar7 = (char *)(*(int *)(unaff_EBP + -0x24) + uVar11);
      }
      if (*pcVar7 == '\0') {
        iVar12 = iVar12 + *(int *)(unaff_EBP + -0x14);
        if ((pcVar10[iVar12] == *pcVar10) || (pcVar10[iVar12] == '\0')) {
          uVar8 = 0x7f;
          if (*(uint *)(unaff_EBP + -0x14) < 0x7f) {
            uVar8 = (undefined1)*(undefined4 *)(unaff_EBP + -0x14);
          }
          if ((*(uint *)(unaff_EBP + -0x20) < uVar11) || (*(int *)(unaff_EBP + -0x24) == 0)) {
            puVar6 = &DAT_0064a3b4;
          }
          else {
            FUN_004c4700();
            puVar6 = (undefined1 *)(*(int *)(unaff_EBP + -0x24) + uVar11);
          }
          *puVar6 = uVar8;
          *(uint *)(unaff_EBP + -0x18) = uVar11;
        }
        else {
          iVar3 = *(int *)(unaff_EBP + 8);
          cVar5 = FUN_00600aa5(*(undefined4 *)(unaff_EBP + 0xc));
          if (cVar5 == '\0') {
            if (*(char *)(iVar3 + 4) == '\0') {
              Peek();
            }
            if (*(char *)(iVar12 + *(int *)(unaff_EBP + 0x14)) == *(char *)(iVar3 + 5)) {
              *(undefined1 *)(unaff_EBP + -0xd) = 1;
              goto LAB_00600a09;
            }
          }
          uVar9 = *(uint *)(unaff_EBP + -0x14);
          if (0x7e < uVar9) {
            uVar9 = 0x7f;
          }
          if ((*(uint *)(unaff_EBP + -0x20) < uVar11) || (*(int *)(unaff_EBP + -0x24) == 0)) {
            puVar6 = &DAT_0064a3b4;
          }
          else {
            FUN_004c4700();
            puVar6 = (undefined1 *)(*(int *)(unaff_EBP + -0x24) + uVar11);
          }
          *puVar6 = (char)uVar9;
        }
LAB_00600a09:
        pcVar10 = *(char **)(unaff_EBP + 0x14);
      }
      else {
        if ((*(uint *)(unaff_EBP + -0x20) < uVar11) || (*(int *)(unaff_EBP + -0x24) == 0)) {
          pcVar7 = "";
        }
        else {
          FUN_004c4700();
          pcVar7 = (char *)(*(int *)(unaff_EBP + -0x24) + uVar11);
        }
        iVar12 = iVar12 + *pcVar7;
      }
      uVar11 = uVar11 + 1;
    } while (uVar11 < *(uint *)(unaff_EBP + 0x10));
    if ((*(char *)(unaff_EBP + -0xd) == '\0') ||
       (cVar5 = FUN_00600aa5(*(undefined4 *)(unaff_EBP + 0xc)), cVar5 != '\0')) break;
    *(int *)(unaff_EBP + -0x14) = *(int *)(unaff_EBP + -0x14) + 1;
    FUN_0060045f();
    *(undefined4 *)(unaff_EBP + -0x18) = 0xffffffff;
  }
  FUN_004040a0(1);
  uVar4 = *(undefined4 *)(unaff_EBP + -0x18);
  *unaff_FS_OFFSET = *(undefined4 *)(unaff_EBP + -0xc);
  return uVar4;
}

