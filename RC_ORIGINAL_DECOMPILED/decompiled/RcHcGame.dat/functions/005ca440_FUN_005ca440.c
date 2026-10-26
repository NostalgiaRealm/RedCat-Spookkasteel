/*
 * FUN_005ca440 at 005ca440
 * undefined FUN_005ca440(void)
 * Address ranges: 005ca440-005ca6a5
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4
FUN_005ca440(int param_1,undefined4 *param_2,undefined4 *param_3,float param_4,undefined4 param_5,
            undefined4 param_6,undefined4 *param_7,uint param_8,code *param_9,undefined4 param_10,
            float *param_11)

{
  float fVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  int iVar4;
  undefined4 *puVar5;
  float10 fVar6;
  float10 fVar7;
  undefined4 local_68;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 local_54;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined1 local_3c [12];
  float local_30 [6];
  float afStack_18 [3];
  float afStack_c [3];
  
  uVar2 = param_5;
  fVar1 = param_4;
  local_68 = 0;
  local_54 = 0xbf800000;
  local_50 = 0xbf800000;
  local_4c = 0xbf800000;
  local_48 = 0x3f800000;
  local_44 = 0x3f800000;
  local_40 = 0x3f800000;
  if (param_2 == (undefined4 *)0x0) {
    param_2 = &local_54;
  }
  if (param_3 == (undefined4 *)0x0) {
    param_3 = &local_48;
  }
  FUN_005b2fe0(local_3c);
  fVar6 = (float10)FUN_005b2f20();
  iVar4 = *(int *)(param_1 + 0x3b8);
  puVar5 = *(undefined4 **)(param_1 + 0x3bc);
  FUN_005cb6a0(param_2,param_3,fVar1,uVar2,local_30 + 3,local_30);
  puVar3 = param_7;
  uVar2 = param_6;
  param_1 = iVar4;
  if (0 < iVar4) {
    do {
      if (((((*(byte *)(puVar5 + 1) & 8) != 0) && ((param_8 & puVar5[2]) != 0)) &&
          ((param_9 == (code *)0x0 || (iVar4 = (*param_9)(0,*puVar5,param_10), iVar4 != 0)))) &&
         (iVar4 = FUN_005b4860(), iVar4 != 0)) {
        iVar4 = 0;
        do {
          if ((local_30[iVar4] < local_30[iVar4 + 6]) || (local_30[iVar4 + 9] < local_30[iVar4 + 3])
             ) break;
          iVar4 = iVar4 + 1;
        } while (iVar4 < 3);
        if (iVar4 == 3) {
          FUN_005b2fe0(local_30 + 6);
          FUN_005b2fe0(local_30 + 9);
          iVar4 = FUN_005d0300(param_5,&param_4,&uStack_60);
          if (iVar4 != 0) {
            if (0.0 <= param_4) {
              if (1.0 < param_4) {
                param_4 = 1.0;
              }
            }
            else {
              param_4 = 0.0;
            }
            param_4 = param_4 * (float)fVar6;
            if (param_4 < *param_11) {
              local_68 = *puVar5;
              *param_11 = param_4;
              *puVar3 = uStack_60;
              puVar3[1] = uStack_5c;
              puVar3[2] = uStack_58;
              FUN_005b3020(param_4,uVar2);
              fVar7 = (float10)FUN_005b2e40();
              puVar3[3] = (float)fVar7;
              puVar3[4] = 6;
            }
          }
        }
      }
      puVar5 = puVar5 + 3;
      param_1 = param_1 + -1;
    } while (param_1 != 0);
  }
  return local_68;
}

