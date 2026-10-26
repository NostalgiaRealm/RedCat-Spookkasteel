/*
 * FUN_004953ec at 004953ec
 * undefined __register FUN_004953ec(int * param_1, char param_2, undefined4 * param_3, undefined4 * param_4, ushort param_5, int * param_6, int param_7, undefined4 * param_8, undefined4 * param_9)
 * Address ranges: 004953ec-004956c2
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_004953ec(int *param_1,char param_2,undefined4 *param_3,undefined4 *param_4,ushort param_5,
                 int *param_6,int param_7,undefined4 *param_8,undefined4 *param_9)

{
  char cVar1;
  bool bVar2;
  undefined2 uVar3;
  uint uVar4;
  undefined4 *extraout_ECX;
  int iVar5;
  undefined4 extraout_ECX_00;
  undefined1 extraout_DL;
  undefined1 uVar6;
  VARIANT *pVVar7;
  undefined4 *in_FS_OFFSET;
  byte bVar8;
  char *pcStackY_180;
  undefined4 uStackY_16c;
  undefined1 *puStackY_168;
  undefined1 *puStackY_164;
  undefined4 in_stack_fffffea0;
  undefined4 in_stack_fffffea4;
  int local_144;
  undefined4 *local_140;
  int local_13c;
  int local_138 [3];
  byte local_12c [256];
  int local_2c;
  int local_28;
  VARIANT local_24;
  undefined4 *local_10;
  undefined1 local_9;
  int *local_8;
  
  bVar8 = 0;
  local_144 = 0;
  local_140 = (undefined4 *)0x0;
  local_138[0] = 0;
  local_13c = 0;
  local_138[2] = 0;
  local_138[1] = 0;
  local_28 = 0;
  local_2c = 0;
  uVar6 = 0;
  if (param_2 != '\0') {
    puStackY_164 = (undefined1 *)0x495430;
    param_1 = (int *)FUN_004033d4((int)param_1,param_2,param_3,in_stack_fffffea0,in_stack_fffffea4);
    param_3 = extraout_ECX;
    uVar6 = extraout_DL;
  }
  pVVar7 = &local_24;
  for (iVar5 = 4; iVar5 != 0; iVar5 = iVar5 + -1) {
    *(undefined4 *)&pVVar7->n1 = *param_4;
    param_4 = param_4 + (uint)bVar8 * -2 + 1;
    pVVar7 = (VARIANT *)((int)pVVar7 + ((uint)bVar8 * -2 + 1) * 4);
  }
  puStackY_164 = (undefined1 *)0x495450;
  local_10 = param_3;
  local_9 = uVar6;
  local_8 = param_1;
  FUN_00405bd4(&local_24);
  puStackY_168 = &LAB_004956c3;
  uStackY_16c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStackY_16c;
  puStackY_164 = &stack0xfffffffc;
  FUN_0045b418(local_8,'\0',extraout_ECX_00);
  if (*param_6 == 0) {
    FUN_00402fe0(*local_8,local_12c);
    FUN_00403fd4(&local_2c,local_12c);
    pcStackY_180 = " not assigned";
    FUN_004040f0(&local_28,5);
    FUN_00403d94(local_28);
  }
  uVar3 = FUN_00405bf8((undefined2 *)&local_24);
  cVar1 = (**(code **)(*local_8 + 4))(local_8,uVar3);
  if (cVar1 == '\0') {
    FUN_00402fe0(*local_8,local_12c);
    FUN_00403fd4(local_138 + 1,local_12c);
    FUN_004040f0(local_138 + 2,3);
    FUN_00403d94(local_138[2]);
  }
  bVar2 = FUN_00405c2c((short *)&local_24);
  if ((bVar2) && ((param_5 & 0x20) != 0)) {
    FUN_00402fe0(*local_8,local_12c);
    FUN_00403fd4(&local_13c,local_12c);
    FUN_004040f0(local_138,3);
    FUN_00403d94(local_138[0]);
  }
  if ((param_5 & 0x2000) != 0) {
    param_5 = param_5 | 0x800;
  }
  local_8[1] = 10;
  FUN_00404e28((VARIANT *)(local_8 + 2),&local_24);
  uVar4 = FUN_00459f84(param_7,(int)param_6);
  local_8[0xb] = uVar4;
  FUN_00403e04(local_8 + 7,local_10);
  FUN_00403e04(local_8 + 8,param_9);
  FUN_004586fc('&',(undefined4 *)local_8[8],(int *)&local_140);
  FUN_00403e04(local_8 + 9,local_140);
  FUN_00403e04(local_8 + 10,param_8);
  if ((param_5 & 4) != 0) {
    param_5 = param_5 | 0x21;
  }
  *(ushort *)(local_8 + 6) = param_5;
  if (*(int *)(*param_6 + 0x18) != 0) {
    FUN_00402fe0(*local_8,local_12c);
    FUN_00403fd4(&local_144,local_12c);
    FUN_00404038(&local_144,(undefined4 *)".Create: flow has changed");
    FUN_00403d94(local_144);
  }
  *(int **)(*param_6 + 0x18) = local_8;
  *in_FS_OFFSET = pcStackY_180;
  FUN_00403dd4(&local_144,6);
  FUN_00403dd4(&local_2c,2);
  FUN_00405bcc(&local_24);
  return;
}

