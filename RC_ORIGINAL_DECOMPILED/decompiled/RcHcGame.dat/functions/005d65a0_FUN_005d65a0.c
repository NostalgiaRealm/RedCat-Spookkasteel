/*
 * FUN_005d65a0 at 005d65a0
 * undefined FUN_005d65a0(void)
 * Address ranges: 005d65a0-005d67a5
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_005d65a0(int param_1)

{
  byte bVar1;
  int iVar2;
  byte *pbVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  char *pcVar7;
  bool bVar8;
  int local_198;
  int local_194;
  byte local_190 [100];
  undefined1 local_12c [200];
  undefined1 local_64 [100];
  
  iVar2 = FUN_005cd370(200);
  if (iVar2 != 0) {
    iVar2 = FUN_0060b449(local_12c,s__s__s_006a97a4,local_190,local_64);
    if (iVar2 == 2) {
      pcVar7 = s_Genesis_Motion_File_006ac634;
      pbVar3 = local_190;
      do {
        bVar1 = *pbVar3;
        bVar8 = bVar1 < (byte)*pcVar7;
        if (bVar1 != *pcVar7) {
LAB_005d6621:
          iVar2 = (1 - (uint)bVar8) - (uint)(bVar8 != 0);
          goto LAB_005d6626;
        }
        if (bVar1 == 0) break;
        bVar1 = pbVar3[1];
        bVar8 = bVar1 < (byte)pcVar7[1];
        if (bVar1 != pcVar7[1]) goto LAB_005d6621;
        pbVar3 = pbVar3 + 2;
        pcVar7 = pcVar7 + 2;
      } while (bVar1 != 0);
      iVar2 = 0;
LAB_005d6626:
      if (iVar2 == 0) {
        iVar2 = FUN_005cd370(200);
        if (iVar2 != 0) {
          iVar2 = FUN_0060b449(local_12c,s__s__i_006ac62c,local_190,&local_194);
          if (iVar2 == 2) {
            pcVar7 = s_NumMotions_006ac620;
            pbVar3 = local_190;
            do {
              bVar1 = *pbVar3;
              bVar8 = bVar1 < (byte)*pcVar7;
              if (bVar1 != *pcVar7) {
LAB_005d669e:
                iVar2 = (1 - (uint)bVar8) - (uint)(bVar8 != 0);
                goto LAB_005d66a3;
              }
              if (bVar1 == 0) break;
              bVar1 = pbVar3[1];
              bVar8 = bVar1 < (byte)pcVar7[1];
              if (bVar1 != pcVar7[1]) goto LAB_005d669e;
              pbVar3 = pbVar3 + 2;
              pcVar7 = pcVar7 + 2;
            } while (bVar1 != 0);
            iVar2 = 0;
LAB_005d66a3:
            if (iVar2 == 0) {
              iVar6 = 0;
              iVar2 = *(int *)(param_1 + 0x48);
              if (0 < local_194) {
                do {
                  iVar4 = FUN_005cd370(200);
                  if (iVar4 == 0) goto LAB_005d677c;
                  iVar4 = FUN_0060b449(local_12c,s__s__i_006ac62c,local_190,&local_198);
                  if (iVar4 != 2) goto LAB_005d677c;
                  pcVar7 = s_ModelNum_006ac614;
                  pbVar3 = local_190;
                  do {
                    bVar1 = *pbVar3;
                    bVar8 = bVar1 < (byte)*pcVar7;
                    if (bVar1 != *pcVar7) {
LAB_005d672f:
                      iVar4 = (1 - (uint)bVar8) - (uint)(bVar8 != 0);
                      goto LAB_005d6734;
                    }
                    if (bVar1 == 0) break;
                    bVar1 = pbVar3[1];
                    bVar8 = bVar1 < (byte)pcVar7[1];
                    if (bVar1 != pcVar7[1]) goto LAB_005d672f;
                    pbVar3 = pbVar3 + 2;
                    pcVar7 = pcVar7 + 2;
                  } while (bVar1 != 0);
                  iVar4 = 0;
LAB_005d6734:
                  if (iVar4 != 0) goto LAB_005d677c;
                  uVar5 = FUN_005bdee0();
                  *(undefined4 *)(local_198 * 0x50 + 0x4c + iVar2) = uVar5;
                  if (*(int *)(local_198 * 0x50 + 0x4c + iVar2) == 0) goto LAB_005d677c;
                  iVar6 = iVar6 + 1;
                } while (iVar6 < local_194);
              }
              return 1;
            }
          }
        }
      }
    }
  }
LAB_005d677c:
  FUN_005cf220(0x75,&DAT_006b3f70,s_Eclipse_C__Genesis3D_OpenSource__006ac5d4 + 8,0x53,&DAT_006b3f70
               ,0);
  return 0;
}

