/*
 * FUN_005bcdd0 at 005bcdd0
 * undefined FUN_005bcdd0(void)
 * Address ranges: 005bcdd0-005bcedf
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_005bcdd0(int param_1)

{
  int *piVar1;
  char cVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  char *pcVar9;
  char *pcVar10;
  uint local_10;
  int local_c;
  uint local_8;
  int local_4;
  
  iVar4 = param_1;
  piVar1 = (int *)(param_1 + 0x34ec4);
  if (*piVar1 != 0) {
    param_1 = 0;
    if (0 < *piVar1) {
      pcVar10 = (char *)(iVar4 + 0x33acc);
      do {
        uVar3 = *(undefined4 *)(pcVar10 + -4);
        uVar6 = 0xffffffff;
        iVar8 = *(int *)(pcVar10 + -8);
        pcVar9 = pcVar10;
        do {
          if (uVar6 == 0) break;
          uVar6 = uVar6 - 1;
          cVar2 = *pcVar9;
          pcVar9 = pcVar9 + 1;
        } while (cVar2 != '\0');
        iVar7 = ~uVar6 - 1;
        pcVar9 = pcVar10;
        if (0 < iVar7) {
          do {
            local_10 = *(uint *)(iVar4 + 0x336c4 + *pcVar9 * 4) >> 0x10;
            local_c = local_10 + 7;
            local_8 = *(uint *)(iVar4 + 0x336c4 + *pcVar9 * 4) & 0xffff;
            local_4 = local_8 + 0xe;
            iVar5 = FUN_005bbab0(&local_10,iVar8,uVar3);
            if (iVar5 == 0) {
              FUN_005bcfb0(iVar4,10,0x32,s_Could_not_draw_font____006a9700);
              FUN_005cf220(0xffffffff,&DAT_006b3f70,s_C__Genesis3D_OpenSource_Source_E_006a956c,
                           0x744,&DAT_006b3f70,0);
            }
            iVar8 = iVar8 + 8;
            iVar7 = iVar7 + -1;
            pcVar9 = pcVar9 + 1;
          } while (iVar7 != 0);
        }
        param_1 = param_1 + 1;
        pcVar10 = pcVar10 + 0x80;
      } while (param_1 < *(int *)(iVar4 + 0x34ec4));
    }
    *(undefined4 *)(iVar4 + 0x34ec4) = 0;
  }
  return;
}

