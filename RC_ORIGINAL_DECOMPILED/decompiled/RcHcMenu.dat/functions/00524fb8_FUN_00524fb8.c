/*
 * FUN_00524fb8 at 00524fb8
 * undefined __register FUN_00524fb8(int * param_1, int param_2)
 * Address ranges: 00524fb8-00525053
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_00524fb8(int *param_1,int param_2)

{
  char cVar1;
  uint uVar2;
  uint uVar3;
  undefined3 extraout_var;
  int iVar4;
  int extraout_EDX;
  bool bVar5;
  LONG local_1c;
  uint local_18;
  undefined4 local_14;
  uint local_10;
  int local_c;
  int *local_8;
  
  local_c = param_2;
  local_8 = param_1;
  if (param_2 == -1) {
    FUN_00411624(0xffffffff,0xffffffff,0xffffffff,&local_1c,0xffffffff);
  }
  else {
    local_1c = 0;
    local_14 = FUN_00432178(param_1);
    uVar2 = FUN_005235f8(local_8);
    iVar4 = local_c - local_8[0x84];
    if (SBORROW4(local_c,local_8[0x84])) {
      uVar2 = thunk_FUN_00402874(uVar2);
      iVar4 = extraout_EDX;
    }
    uVar3 = (uint)((longlong)(int)uVar2 * (longlong)iVar4);
    if ((longlong)(int)uVar3 != (longlong)(int)uVar2 * (longlong)iVar4) {
      uVar3 = thunk_FUN_00402874(uVar3);
    }
    local_18 = uVar3;
    iVar4 = FUN_005235f8(local_8);
    local_10 = iVar4 + local_18;
    if (SCARRY4(iVar4,local_18)) {
      local_10 = thunk_FUN_00402874(local_10);
    }
    cVar1 = FUN_005237c4(local_8);
    if (cVar1 != '\0') {
      bVar5 = SBORROW4(local_10,1);
      local_10 = local_10 - 1;
      if (bVar5) {
        thunk_FUN_00402874(CONCAT31(extraout_var,cVar1));
      }
    }
  }
  FUN_004ab7f0(local_8,&local_1c,'\x01');
  return;
}

