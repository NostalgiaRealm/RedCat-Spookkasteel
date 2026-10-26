/*
 * FUN_00495f94 at 00495f94
 * undefined __register FUN_00495f94(int * param_1, int * param_2)
 * Address ranges: 00495f94-00496124;00496233-0049626d
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_00495f94(int *param_1,int *param_2)

{
  undefined1 *puVar1;
  char cVar2;
  int iVar3;
  undefined4 uVar4;
  int *in_FS_OFFSET;
  int iStack_264;
  char *pcStack_260;
  undefined1 *puStack_25c;
  char *pcStack_258;
  char *pcStack_254;
  undefined1 *puStack_250;
  int iStack_24c;
  undefined1 *puStack_248;
  undefined1 *puStack_244;
  int local_234 [3];
  byte local_228 [256];
  int local_128;
  int local_124;
  int local_120;
  byte local_11c [256];
  int local_1c;
  int local_18 [2];
  undefined1 local_d;
  int *local_c;
  int *local_8;
  
  puStack_244 = &stack0xfffffffc;
  local_234[0] = 0;
  local_234[2] = 0;
  local_234[1] = 0;
  local_120 = 0;
  local_124 = 0;
  local_128 = 0;
  local_18[0] = 0;
  local_1c = 0;
  local_18[1] = 0;
  puStack_248 = &LAB_0049626e;
  iStack_24c = *in_FS_OFFSET;
  *in_FS_OFFSET = (int)&iStack_24c;
  puVar1 = &stack0xfffffffc;
  local_c = param_2;
  local_8 = param_1;
  if (param_2 == (int *)0x0) {
    puStack_250 = (undefined1 *)0x495ff9;
    FUN_00402fe0(*param_1,local_11c);
    puStack_250 = (undefined1 *)0x496007;
    FUN_00403fd4(&local_1c,local_11c);
    puStack_250 = (undefined1 *)local_1c;
    pcStack_254 = ".Assign: ";
    pcStack_258 = "Other not assigned";
    puStack_25c = (undefined1 *)0x496021;
    FUN_004040f0(local_18,3);
    puStack_25c = (undefined1 *)0x496033;
    FUN_00403d94(local_18[0]);
    puVar1 = puStack_244;
  }
  puStack_244 = puVar1;
  puStack_25c = (undefined1 *)0x49603b;
  iVar3 = FUN_00402fdc(local_8);
  puStack_25c = (undefined1 *)0x496045;
  uVar4 = FUN_0040320c(local_c,iVar3);
  if ((char)uVar4 == '\0') {
    puStack_25c = (undefined1 *)0x496059;
    FUN_00402fe0(*local_8,local_11c);
    puStack_25c = (undefined1 *)0x49606a;
    FUN_00403fd4(&local_124,local_11c);
    puStack_25c = (undefined1 *)local_124;
    pcStack_260 = ".Assign: ";
    iStack_264 = 0x496085;
    FUN_00402fe0(*local_c,local_228);
    iStack_264 = 0x496096;
    FUN_00403fd4(&local_128,local_228);
    iStack_264 = local_128;
    FUN_004040f0(&local_120,4);
    FUN_00403d94(local_120);
  }
  local_d = 0;
  pcStack_260 = &LAB_00496125;
  iStack_264 = *in_FS_OFFSET;
  *in_FS_OFFSET = (int)&iStack_264;
  puStack_25c = &stack0xfffffffc;
  cVar2 = (**(code **)(*local_c + 0x4c))();
  if (cVar2 == '\0') {
    local_d = (**(code **)(*local_8 + 0x68))();
  }
  else {
    cVar2 = (**(code **)(*local_c + 0x50))();
    if (cVar2 == '\0') {
      local_d = (**(code **)(*local_8 + 0x1c))(local_8,local_c);
    }
    else {
      local_d = (**(code **)(*local_8 + 0x60))();
    }
  }
  *in_FS_OFFSET = iStack_264;
  *in_FS_OFFSET = (int)pcStack_258;
  puStack_250 = &LAB_00496275;
  pcStack_254 = (char *)0x496250;
  FUN_00403dd4(local_234,3);
  pcStack_254 = (char *)0x496260;
  FUN_00403dd4(&local_128,3);
  pcStack_254 = (char *)0x49626d;
  FUN_00403dd4(&local_1c,3);
  return;
}

