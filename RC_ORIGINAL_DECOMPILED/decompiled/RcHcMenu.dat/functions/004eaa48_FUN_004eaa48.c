/*
 * FUN_004eaa48 at 004eaa48
 * undefined __register FUN_004eaa48(int * param_1, int * param_2)
 * Address ranges: 004eaa48-004eab8d
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_004eaa48(int *param_1,int *param_2)

{
  char *pcVar1;
  uint uVar2;
  uint extraout_ECX;
  int *in_FS_OFFSET;
  bool bVar3;
  undefined4 *local_30;
  byte *local_2c [2];
  int local_24;
  int iVar4;
  byte **ppbVar5;
  undefined4 **ppuVar6;
  int local_1c;
  undefined1 *local_18;
  char *local_14;
  undefined4 *local_10;
  int *local_c;
  int *local_8;
  
  local_14 = &stack0xfffffffc;
  local_10 = (undefined4 *)0x5;
  do {
    local_10 = (undefined4 *)((int)local_10 + -1);
  } while (local_10 != (undefined4 *)0x0);
  local_18 = &LAB_004eab8e;
  local_1c = *in_FS_OFFSET;
  *in_FS_OFFSET = (int)&local_1c;
  local_c = param_2;
  local_8 = param_1;
  pcVar1 = (char *)(**(code **)(*param_1 + 0x4c))();
  FUN_00403f68(&local_24,pcVar1);
  FUN_00409690((byte *)local_24,(int *)&local_14);
  local_18 = (undefined1 *)FUN_0040431c("SELECT ",local_14);
  local_1c = FUN_0040431c(" FROM",local_14);
  uVar2 = FUN_0040431c("ORDER BY",local_14);
  if (((int)local_18 < 1) || (local_1c < 1)) {
    uVar2 = FUN_00403d94("Assertion failure");
  }
  bVar3 = SCARRY4((int)local_18,6);
  local_18 = (undefined1 *)((int)local_18 + 6);
  if (bVar3) {
    thunk_FUN_00402874(uVar2);
  }
  local_24 = 0x4eaaf8;
  FUN_00404238((int)local_14,1,(uint)local_18,(int *)(local_2c + 1));
  iVar4 = 0x4eab08;
  FUN_0040407c((int *)&local_10,(undefined4 *)local_2c[1],(undefined4 *)" Count(*) ");
  if (iVar4 < 1) {
    ppuVar6 = &local_30;
    local_24 = 0x4eab43;
    uVar2 = FUN_00404030((int)local_14);
    local_24 = 0x4eab50;
    FUN_00404238((int)local_14,local_1c,uVar2,(int *)ppuVar6);
    FUN_00404038((int *)&local_10,local_30);
  }
  else {
    ppbVar5 = local_2c;
    uVar2 = (int)ppbVar5 - local_1c;
    if (SBORROW4((int)ppbVar5,local_1c)) {
      local_24 = 0x4eab1f;
      thunk_FUN_00402874((uint)ppbVar5);
      uVar2 = extraout_ECX;
    }
    local_24 = 0x4eab2a;
    FUN_00404238((int)local_14,local_1c,uVar2,(int *)ppbVar5);
    FUN_00404038((int *)&local_10,(undefined4 *)local_2c[0]);
  }
  FUN_00403e04(local_c,local_10);
  *in_FS_OFFSET = local_1c;
  local_14 = &LAB_004eab95;
  local_18 = (undefined1 *)0x4eab80;
  FUN_00403dd4((int *)&local_30,4);
  local_18 = (undefined1 *)0x4eab8d;
  FUN_00403dd4((int *)&local_14,2);
  return;
}

