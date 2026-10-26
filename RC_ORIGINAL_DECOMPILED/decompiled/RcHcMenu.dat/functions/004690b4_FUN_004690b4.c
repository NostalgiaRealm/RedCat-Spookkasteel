/*
 * FUN_004690b4 at 004690b4
 * undefined __register FUN_004690b4(int * param_1, int * param_2)
 * Address ranges: 004690b4-004691e6
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_004690b4(int *param_1,int *param_2)

{
  char cVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  undefined4 *in_FS_OFFSET;
  undefined4 uVar5;
  undefined4 uStack_1b0;
  undefined1 *puStack_1ac;
  undefined1 *puStack_1a8;
  undefined4 *local_198;
  byte *local_194;
  undefined1 local_190;
  byte local_18c [64];
  char *local_14c;
  byte local_148 [256];
  byte local_48;
  char local_47;
  int *local_8;
  
  puStack_1a8 = &stack0xfffffffc;
  local_198 = (undefined4 *)0x0;
  local_14c = (char *)0x0;
  puStack_1ac = &LAB_004691e7;
  uStack_1b0 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_1b0;
  local_8 = param_2;
  FUN_00402fe0(*param_1,local_148);
  FUN_00402bd8(&local_48,local_148,0x3f);
  iVar3 = 1;
  uVar4 = (uint)local_48;
  if (local_47 == 'T') {
    iVar3 = 2;
  }
  if (4 < (int)(uVar4 - iVar3)) {
    FUN_004028e8(&local_48,uVar4 - 4,5,local_18c);
    FUN_00403fd4((int *)&local_14c,local_18c);
    iVar2 = FUN_00409758(local_14c,"FIELD");
    if (iVar2 == 0) {
      uVar4 = uVar4 - 5;
    }
  }
  uVar5 = 0;
  FUN_004028e8(&local_48,iVar3,(uVar4 + 1) - iVar3,local_18c);
  local_194 = local_18c;
  local_190 = 4;
  FUN_0040a8a8(local_8,&DAT_00469210,&local_194,uVar5);
  cVar1 = (**(code **)(*param_1 + 0x7c))();
  if (cVar1 == '\0') {
    FUN_004097d0((undefined *)*local_8,(int *)&local_198);
    FUN_00403e04(local_8,local_198);
  }
  *in_FS_OFFSET = uStack_1b0;
  puStack_1a8 = &LAB_004691ee;
  puStack_1ac = (undefined1 *)0x4691db;
  FUN_00403db0((int *)&local_198);
  puStack_1ac = (undefined1 *)0x4691e6;
  FUN_00403db0((int *)&local_14c);
  return;
}

