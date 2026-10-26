/*
 * FUN_005a4190 at 005a4190
 * undefined FUN_005a4190(void)
 * Address ranges: 005a4190-005a42de
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_005a4190(int param_1)

{
  uint uVar1;
  char cVar2;
  uint uVar3;
  char *pcVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  char *pcVar8;
  
  uVar1 = *(uint *)(param_1 + 8);
  do {
    uVar1 = uVar1 - 1;
    if ((int)uVar1 < 0) {
      return;
    }
    uVar6 = *(uint *)(param_1 + 8);
    if ((uVar6 < uVar1) || (*(int *)(param_1 + 4) == 0)) {
      pcVar4 = "";
    }
    else {
      cVar2 = *(char *)(*(int *)(param_1 + 4) + -1);
      if ((cVar2 != '\0') && (cVar2 != -1)) {
        uVar3 = FUN_0040ce00();
        if (uVar3 < uVar6) {
          FUN_005fe5fb();
        }
        iVar5 = *(int *)(param_1 + 4);
        if (((iVar5 == 0) || (cVar2 = *(char *)(iVar5 + -1), cVar2 == '\0')) || (cVar2 == -1)) {
          if (uVar6 == 0) {
            if (iVar5 != 0) {
              FUN_00404190(0);
            }
          }
          else if (*(uint *)(param_1 + 0xc) < uVar6) goto LAB_005a420b;
        }
        else if (uVar6 == 0) {
          *(char *)(iVar5 + -1) = cVar2 + -1;
          FUN_004040a0(0);
        }
        else {
LAB_005a420b:
          FUN_00401a60(uVar6);
        }
      }
      if (*(int *)(param_1 + 4) != 0) {
        *(undefined1 *)(*(int *)(param_1 + 4) + -1) = 0xff;
      }
      pcVar4 = (char *)(*(int *)(param_1 + 4) + uVar1);
    }
    iVar5 = FUN_0060b2e2((int)*pcVar4);
    if (iVar5 == 0) {
      return;
    }
    if (*(uint *)(param_1 + 8) < uVar1) {
      FUN_005fe747();
    }
    pcVar4 = *(char **)(param_1 + 4);
    if (((pcVar4 != (char *)0x0) && (pcVar4[-1] != '\0')) && (pcVar4[-1] != -1)) {
      FUN_004040a0(1);
      uVar6 = 0xffffffff;
      pcVar8 = pcVar4;
      do {
        if (uVar6 == 0) break;
        uVar6 = uVar6 - 1;
        cVar2 = *pcVar8;
        pcVar8 = pcVar8 + 1;
      } while (cVar2 != '\0');
      FUN_004040f0(pcVar4,~uVar6 - 1);
    }
    iVar7 = *(int *)(param_1 + 8) - uVar1;
    iVar5 = -1;
    if (iVar7 != -1) {
      iVar5 = iVar7;
    }
    if (iVar5 != 0) {
      FUN_0060ab50(*(int *)(param_1 + 4) + uVar1,*(int *)(param_1 + 4) + iVar5 + uVar1,
                   (*(int *)(param_1 + 8) - iVar5) - uVar1);
      iVar5 = *(int *)(param_1 + 8) - iVar5;
      cVar2 = FUN_00401940(iVar5,0);
      if (cVar2 != '\0') {
        *(int *)(param_1 + 8) = iVar5;
        *(undefined1 *)(*(int *)(param_1 + 4) + iVar5) = 0;
      }
    }
  } while( true );
}

