/*
 * FUN_00568e54 at 00568e54
 * undefined __register FUN_00568e54(int * param_1, undefined4 param_2, int * param_3, undefined4 param_4, undefined4 * param_5, undefined4 * param_6)
 * Address ranges: 00568e54-00568fb6;00568fc1-00568fee
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_00568e54(int *param_1,undefined4 param_2,int *param_3,undefined4 param_4,
                 undefined4 *param_5,undefined4 *param_6)

{
  undefined1 *puVar1;
  uint uVar2;
  undefined4 uVar3;
  int *piVar4;
  int iVar5;
  int *in_FS_OFFSET;
  int iStackY_188;
  undefined1 *puStackY_184;
  undefined1 *puStackY_180;
  char *pcVar6;
  int iStack_168;
  undefined1 *puStack_164;
  undefined1 *puStack_160;
  byte local_150 [36];
  undefined4 *local_12c;
  byte local_128 [256];
  int local_28;
  int local_24;
  undefined4 local_20;
  undefined1 local_1c;
  int *local_18;
  undefined *local_14;
  int *local_10;
  undefined4 local_c;
  int *local_8;
  
  puStack_160 = &stack0xfffffffc;
  local_12c = (undefined4 *)0x0;
  local_24 = 0;
  local_28 = 0;
  local_14 = (undefined *)0x0;
  puStack_164 = &LAB_00568fef;
  iStack_168 = *in_FS_OFFSET;
  *in_FS_OFFSET = (int)&iStack_168;
  local_1c = 0;
  local_20 = param_2;
  local_10 = param_3;
  local_c = param_2;
  local_8 = param_1;
  FUN_00402fe0(*param_1,local_128);
  FUN_00403fd4(&local_28,local_128);
  pcVar6 = "GetPlayerName";
  puStackY_180 = (undefined1 *)0x568ed0;
  FUN_004040f0(&local_24,3);
  puStackY_180 = (undefined1 *)local_24;
  puStackY_184 = (undefined1 *)0x568ed9;
  uVar2 = FUN_004a418c();
  puVar1 = puStackY_180;
  puStackY_180 = (undefined1 *)0x568ee5;
  FUN_004a474c(uVar2,(int)puVar1,2,(int)pcVar6);
  puStackY_180 = (undefined1 *)0x568eed;
  FUN_00403db0(local_10);
  *param_6 = 0;
  *param_5 = 0;
  puStackY_180 = (undefined1 *)0x568f09;
  FUN_004b0344(local_c,(int *)&local_12c);
  puStackY_180 = (undefined1 *)0x568f20;
  FUN_0040407c((int *)&local_14,(undefined4 *)local_8[0x44],local_12c);
  puStackY_180 = (undefined1 *)0x568f28;
  uVar3 = FUN_00409dd0(local_14);
  if ((char)uVar3 != '\0') {
    puStackY_180 = (undefined1 *)0x568f3c;
    local_18 = (int *)FUN_00565a38((int *)&LAB_0056591c,'\x01');
    puStackY_184 = &LAB_00568fb7;
    iStackY_188 = *in_FS_OFFSET;
    *in_FS_OFFSET = (int)&iStackY_188;
    puStackY_180 = &stack0xfffffffc;
    FUN_00565fec(local_18,local_14);
    FUN_00565978((int)local_18,local_150);
    FUN_00403fd4(local_10,local_150);
    uVar3 = FUN_0056595c((int)local_18);
    *param_5 = uVar3;
    uVar3 = FUN_00565940((int)local_18);
    *param_6 = uVar3;
    piVar4 = (int *)(**(code **)(*(int *)local_8[0x46] + 8))();
    iVar5 = FUN_004a418c();
    FUN_004a4afc(iVar5,0x569030,piVar4);
    *in_FS_OFFSET = iStackY_188;
  }
  *in_FS_OFFSET = (int)pcVar6;
  FUN_00403db0((int *)&local_12c);
  FUN_00403dd4(&local_28,2);
  FUN_00403db0((int *)&local_14);
  return;
}

