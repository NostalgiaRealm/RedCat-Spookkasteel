/*
 * FUN_10013e20 at 10013e20
 * undefined FUN_10013e20(void)
 * Address ranges: 10013e20-1001417e
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_10013e20(int param_1,int param_2,uint *param_3)

{
  int iVar1;
  undefined4 *puVar2;
  int iVar3;
  uint *puVar4;
  int iVar5;
  uint uVar6;
  byte *pbVar7;
  byte bVar8;
  byte bVar9;
  uint local_c54;
  int local_c4c;
  uint local_c40 [782];
  int local_8;
  int local_4;
  
  iVar1 = (param_2 - DAT_104e98b4) / 0x44;
  if (DAT_1014e350 != 0) {
    (*DAT_1014e35c)(s_Cancel_requested____10036a5c);
    return 0;
  }
  pbVar7 = (byte *)((iVar1 >> 3) + *(int *)(param_1 + 0x30));
  bVar9 = *pbVar7;
  bVar8 = (byte)(1 << ((byte)iVar1 & 7));
  if ((bVar8 & bVar9) == 0) {
    *pbVar7 = bVar9 | bVar8;
    *(int *)(param_1 + 0x3c) = *(int *)(param_1 + 0x3c) + 1;
    *(int *)(DAT_104e98d0 + 8 + DAT_104e98ec * 0xc) =
         *(int *)(DAT_104e98d0 + 8 + DAT_104e98ec * 0xc) + 1;
    DAT_104e98e8 = DAT_104e98e8 + 1;
  }
  iVar1 = *(int *)(param_1 + 0x30);
  puVar2 = *(undefined4 **)(DAT_104e98d0 + *(int *)(param_2 + 0x34) * 0xc);
  do {
    if (puVar2 == (undefined4 *)0x0) {
      return 1;
    }
    iVar5 = ((int)puVar2 - DAT_104e98b4) / 0x44;
    iVar3 = iVar5 >> 3;
    bVar9 = (byte)(1 << ((byte)iVar5 & 7));
    if (((*(byte *)(iVar3 + *(int *)(param_1 + 0x2c)) & bVar9) != 0) &&
       ((*(byte *)(iVar3 + (int)param_3) & bVar9) != 0)) {
      if (puVar2[0x10] == 0) {
        iVar5 = puVar2[0xb];
      }
      else {
        iVar5 = puVar2[0xc];
      }
      local_c54 = 0;
      if (DAT_104e98c4 < 1) {
LAB_10013fa8:
        if ((*(byte *)(iVar3 + *(int *)(param_1 + 0x30)) & bVar9) != 0) goto LAB_10014161;
      }
      else {
        puVar4 = param_3;
        local_c4c = DAT_104e98c4;
        do {
          uVar6 = *(uint *)((iVar5 - (int)param_3) + (int)puVar4) & *puVar4;
          *(uint *)(((int)local_c40 - (int)param_3) + (int)puVar4) = uVar6;
          local_c54 = local_c54 | ~*(uint *)((iVar1 - (int)param_3) + (int)puVar4) & uVar6;
          puVar4 = puVar4 + 1;
          local_c4c = local_c4c + -1;
        } while (local_c4c != 0);
        if (local_c54 == 0) goto LAB_10013fa8;
      }
      iVar5 = FUN_1000d6a0(puVar2[1],&local_4);
      if (iVar5 == 0) {
        return 0;
      }
      iVar5 = FUN_1000c570(local_4,param_1 + 8,0,&local_4);
      if (iVar5 == 0) {
        return 0;
      }
      if (local_4 != 0) {
        iVar5 = FUN_1000d6a0(param_3[0x30e],&local_8);
        if (iVar5 == 0) {
          return 0;
        }
        iVar5 = FUN_1000c570(local_8,puVar2 + 2,1,&local_8);
        if (iVar5 == 0) {
          return 0;
        }
        if (local_8 == 0) {
          FUN_1000c2e0(local_4);
        }
        else if (param_3[0x30f] == 0) {
          iVar5 = FUN_10013e20(param_1,puVar2,local_c40);
          if (iVar5 == 0) {
            return 0;
          }
          FUN_1000c2e0(local_8);
LAB_10014159:
          FUN_1000c2e0(local_4);
        }
        else {
          iVar5 = FUN_10013bb0(local_8,param_3[0x30f],local_4,0,&local_4);
          if (iVar5 == 0) {
            return 0;
          }
          if (local_4 == 0) {
            FUN_1000c2e0(local_8);
          }
          else {
            iVar5 = FUN_10013bb0(param_3[0x30f],local_8,local_4,1,&local_4);
            if (iVar5 == 0) {
              return 0;
            }
            if (local_4 != 0) {
              iVar5 = FUN_10013e20(param_1,puVar2,local_c40);
              if (iVar5 == 0) {
                return 0;
              }
              FUN_1000c2e0(local_8);
              goto LAB_10014159;
            }
            FUN_1000c2e0(local_8);
          }
        }
      }
    }
LAB_10014161:
    puVar2 = (undefined4 *)*puVar2;
  } while( true );
}

