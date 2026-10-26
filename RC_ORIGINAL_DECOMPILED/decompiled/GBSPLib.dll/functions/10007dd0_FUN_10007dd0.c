/*
 * FUN_10007dd0 at 10007dd0
 * undefined FUN_10007dd0(void)
 * Address ranges: 10007dd0-100080e8
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_10007dd0(char *param_1,int param_2)

{
  char cVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  char *pcVar6;
  undefined4 *puVar7;
  char *pcVar8;
  char acStack_208 [260];
  char acStack_104 [260];
  
  (*DAT_1014e35c)(s_FileName__s_10037e38,param_1);
  FUN_100088a0(param_1);
  DAT_10037ac0 = 1;
  DAT_10037abc = (-(uint)(*(int *)(param_2 + 4) != 0) & 4) + 1;
  _DAT_10037ab4 = *(undefined4 *)(param_2 + 8);
  DAT_10037ac4 = *(int *)(param_2 + 0xc);
  DAT_10037acc = *(undefined4 *)(param_2 + 0x10);
  _DAT_10037ac8 = *(undefined4 *)(param_2 + 0x14);
  DAT_10037ad0 = *(undefined4 *)(param_2 + 0x18);
  _DAT_10037ad8 = *(undefined4 *)(param_2 + 0x1c);
  _DAT_10260e80 = *(undefined4 *)(param_2 + 0x20);
  _DAT_10260e84 = *(undefined4 *)(param_2 + 0x24);
  _DAT_10260e88 = *(undefined4 *)(param_2 + 0x28);
  (*DAT_1014e35c)(s_____Radiosity_GBSP_File_____10037e18);
  iVar2 = FUN_10005270(param_1);
  if (iVar2 == 0) {
    (*DAT_1014e358)(s_LightGBSPFile__Could_not_load_GB_10037de8,param_1);
    return 0;
  }
  DAT_1014e30c = DAT_1014e27c;
  DAT_1014e2f8 = (undefined4 *)FUN_10014310(DAT_1014e27c * 0xc);
  puVar7 = DAT_1014e2f8;
  for (uVar4 = DAT_1014e30c * 3 & 0x3fffffff; uVar4 != 0; uVar4 = uVar4 - 1) {
    *puVar7 = 0;
    puVar7 = puVar7 + 1;
  }
  for (iVar2 = 0; iVar2 != 0; iVar2 = iVar2 + -1) {
    *(undefined1 *)puVar7 = 0;
    puVar7 = (undefined4 *)((int)puVar7 + 1);
  }
  iVar2 = FUN_10008190();
  if (iVar2 == 0) {
    (*DAT_1014e358)(s_LightGBSPFile__MakeVertNormals_f_10037dbc);
    FUN_100080f0();
    return 0;
  }
  if (DAT_1014e254 != 0) {
    FUN_10014360(DAT_1014e254);
    _DAT_1003fde8 = 0;
  }
  uVar4 = 0xffffffff;
  DAT_1014e254 = 0;
  DAT_1014e2e0 = 0;
  pcVar6 = param_1;
  do {
    pcVar8 = pcVar6;
    if (uVar4 == 0) break;
    uVar4 = uVar4 - 1;
    pcVar8 = pcVar6 + 1;
    cVar1 = *pcVar6;
    pcVar6 = pcVar8;
  } while (cVar1 != '\0');
  uVar4 = ~uVar4;
  pcVar6 = pcVar8 + -uVar4;
  pcVar8 = acStack_104;
  for (uVar5 = uVar4 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
    *(undefined4 *)pcVar8 = *(undefined4 *)pcVar6;
    pcVar6 = pcVar6 + 4;
    pcVar8 = pcVar8 + 4;
  }
  for (uVar4 = uVar4 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
    *pcVar8 = *pcVar6;
    pcVar6 = pcVar6 + 1;
    pcVar8 = pcVar8 + 1;
  }
  FUN_10012920(acStack_104);
  FUN_100128c0(acStack_104,&DAT_10037db4);
  uVar4 = 0xffffffff;
  pcVar6 = param_1;
  do {
    pcVar8 = pcVar6;
    if (uVar4 == 0) break;
    uVar4 = uVar4 - 1;
    pcVar8 = pcVar6 + 1;
    cVar1 = *pcVar6;
    pcVar6 = pcVar8;
  } while (cVar1 != '\0');
  uVar4 = ~uVar4;
  pcVar6 = pcVar8 + -uVar4;
  pcVar8 = acStack_208;
  for (uVar5 = uVar4 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
    *(undefined4 *)pcVar8 = *(undefined4 *)pcVar6;
    pcVar6 = pcVar6 + 4;
    pcVar8 = pcVar8 + 4;
  }
  for (uVar4 = uVar4 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
    *pcVar8 = *pcVar6;
    pcVar6 = pcVar6 + 1;
    pcVar8 = pcVar8 + 1;
  }
  FUN_10012920(acStack_208);
  FUN_100128c0(acStack_208,&DAT_10037dac);
  iVar2 = FUN_1000b820();
  if (iVar2 == 0) goto LAB_100080a8;
  iVar2 = FUN_10014700(param_1,0,4);
  if (iVar2 == 0) {
    (*DAT_1014e358)(s_LightGBSPFile__Could_not_open_GB_10037d70,param_1);
  }
  else {
    (*DAT_1014e35c)(s_Num_Faces____5i_10037d54,DAT_1014e2c0);
    if (DAT_10037ac4 != 0) {
      iVar3 = FUN_1000f630();
      if (iVar3 == 0) goto LAB_1000809d;
    }
    iVar3 = FUN_1000a910();
    if (iVar3 == 0) {
      (*DAT_1014e358)(s_LightGBSPFile__Could_not_create_m_10037d24);
    }
    else {
      iVar3 = FUN_100084d0();
      if (iVar3 != 0) {
        FUN_1000b0a0();
        if (DAT_10037ac4 == 0) {
LAB_10008071:
          FUN_10008160();
          iVar3 = FUN_1000a220(iVar2);
          if (iVar3 != 0) {
            iVar3 = FUN_10009470(iVar2);
            if (iVar3 != 0) {
              iVar3 = FUN_1000a5f0(iVar2);
              if (iVar3 != 0) {
                FUN_10014990();
                FUN_100080f0();
                (*DAT_1014e35c)(s_Num_Light_Maps____5i_10037d08,DAT_10265cd4);
                return 1;
              }
            }
          }
        }
        else {
          iVar3 = FUN_100100c0(acStack_208);
          if (iVar3 != 0) {
            iVar3 = FUN_100103a0();
            if (iVar3 != 0) {
              FUN_10010220();
              iVar3 = FUN_10010680();
              if (iVar3 != 0) {
                FUN_1000fcb0();
                goto LAB_10008071;
              }
            }
          }
        }
      }
    }
  }
LAB_1000809d:
  if (iVar2 != 0) {
    FUN_10014990();
  }
LAB_100080a8:
  FUN_100080f0();
  return 0;
}

