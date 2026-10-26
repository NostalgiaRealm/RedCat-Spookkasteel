/*
 * FUN_006066f1 at 006066f1
 * undefined FUN_006066f1(void)
 * Address ranges: 006066f1-006068bc
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_006066f1(void)

{
  short sVar1;
  int iVar2;
  char cVar3;
  short sVar4;
  char *pcVar5;
  undefined1 *puVar6;
  short *psVar7;
  undefined1 uVar8;
  uint uVar9;
  short *psVar10;
  int unaff_EBP;
  uint uVar11;
  int iVar12;
  
  FUN_0060eb4c();
  psVar10 = *(short **)(unaff_EBP + 0x14);
  sVar4 = *psVar10;
  psVar7 = psVar10;
  sVar1 = sVar4;
  while (sVar1 != 0) {
    if (sVar1 == sVar4) {
      *(int *)(unaff_EBP + 0x10) = *(int *)(unaff_EBP + 0x10) + 1;
    }
    psVar7 = psVar7 + 1;
    sVar1 = *psVar7;
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
      sVar4 = psVar10[iVar12];
      psVar7 = psVar10 + iVar12;
      if (sVar4 != 0) {
        do {
          if (sVar4 == *psVar10) break;
          iVar12 = iVar12 + 1;
          psVar7 = psVar7 + 1;
          sVar4 = *psVar7;
        } while (sVar4 != 0);
      }
      if ((*(uint *)(unaff_EBP + -0x20) < uVar11) || (*(int *)(unaff_EBP + -0x24) == 0)) {
        pcVar5 = "";
      }
      else {
        FUN_004c4700();
        pcVar5 = (char *)(*(int *)(unaff_EBP + -0x24) + uVar11);
      }
      if (*pcVar5 == '\0') {
        iVar12 = iVar12 + *(int *)(unaff_EBP + -0x14);
        if ((psVar10[iVar12] == *psVar10) || (psVar10[iVar12] == 0)) {
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
          iVar2 = *(int *)(unaff_EBP + 8);
          cVar3 = FUN_006069c8(*(undefined4 *)(unaff_EBP + 0xc));
          if (cVar3 == '\0') {
            if (*(char *)(iVar2 + 4) == '\0') {
              Peek();
            }
            if (*(short *)(*(int *)(unaff_EBP + 0x14) + iVar12 * 2) == *(short *)(iVar2 + 6)) {
              *(undefined1 *)(unaff_EBP + -0xd) = 1;
              goto LAB_0060686b;
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
LAB_0060686b:
        psVar10 = *(short **)(unaff_EBP + 0x14);
      }
      else {
        if ((*(uint *)(unaff_EBP + -0x20) < uVar11) || (*(int *)(unaff_EBP + -0x24) == 0)) {
          pcVar5 = "";
        }
        else {
          FUN_004c4700();
          pcVar5 = (char *)(*(int *)(unaff_EBP + -0x24) + uVar11);
        }
        iVar12 = iVar12 + *pcVar5;
      }
      uVar11 = uVar11 + 1;
    } while (uVar11 < *(uint *)(unaff_EBP + 0x10));
    if ((*(char *)(unaff_EBP + -0xd) == '\0') ||
       (cVar3 = FUN_006069c8(*(undefined4 *)(unaff_EBP + 0xc)), cVar3 != '\0')) break;
    *(int *)(unaff_EBP + -0x14) = *(int *)(unaff_EBP + -0x14) + 1;
    FUN_00605560();
    *(undefined4 *)(unaff_EBP + -0x18) = 0xffffffff;
  }
  FUN_004040a0(1);
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return *(undefined4 *)(unaff_EBP + -0x18);
}

