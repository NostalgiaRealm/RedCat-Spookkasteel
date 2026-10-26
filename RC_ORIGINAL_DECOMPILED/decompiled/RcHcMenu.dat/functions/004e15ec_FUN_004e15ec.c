/*
 * FUN_004e15ec at 004e15ec
 * undefined __register FUN_004e15ec(int * param_1, int * param_2)
 * Address ranges: 004e15ec-004e1684;004e169d-004e1917
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_004e15ec(int *param_1,int *param_2)

{
  uint uVar1;
  uint uVar2;
  int extraout_EDX;
  int iVar3;
  int extraout_EDX_00;
  int local_24 [2];
  uint local_1c;
  uint local_18;
  uint local_14;
  uint local_10;
  int *local_c;
  int *local_8;
  
  local_c = param_2;
  local_8 = param_1;
  FUN_0041160c(0,0,local_24);
  FUN_0043228c(local_c,local_24,(int *)&local_1c);
  local_8[0xbe] = local_1c;
  FUN_0041160c(0,0,local_24);
  FUN_0043228c(local_c,local_24,(int *)&local_1c);
  local_8[0xbf] = local_18;
  local_8[0xc4] = (int)local_c;
  if (*(char *)((int)local_8 + 0x2e9) == '\0') {
    FUN_0044b8ac((int)local_8,'\x04');
  }
  else {
    local_10 = 0;
    local_14 = 0;
    uVar1 = local_14;
    switch((char)local_8[0xba]) {
    case '\0':
      FUN_0041160c(0,0,local_24);
      FUN_0043228c(local_c,local_24,(int *)&local_1c);
      uVar1 = local_18 - local_8[0xf];
      if (SBORROW4(local_18,local_8[0xf])) {
        uVar1 = thunk_FUN_00402874(uVar1);
      }
      local_10 = uVar1;
      FUN_0041160c(0,0,local_24);
      FUN_0043228c(local_c,local_24,(int *)&local_1c);
      uVar1 = local_1c + 2;
      if (SCARRY4(local_1c,2)) {
        uVar1 = thunk_FUN_00402874(local_1c + 2);
      }
      break;
    case '\x01':
      FUN_0041160c(0,0,local_24);
      FUN_0043228c(local_c,local_24,(int *)&local_1c);
      uVar1 = local_18 - local_8[0xf];
      if (SBORROW4(local_18,local_8[0xf])) {
        uVar1 = thunk_FUN_00402874(uVar1);
      }
      local_10 = uVar1;
      FUN_0041160c(0,0,local_24);
      FUN_0043228c(local_c,local_24,(int *)&local_1c);
      iVar3 = local_8[0xe] - local_c[0xe];
      if (SBORROW4(local_8[0xe],local_c[0xe])) {
        local_1c = thunk_FUN_00402874(local_1c);
        iVar3 = extraout_EDX;
      }
      uVar2 = local_1c - iVar3;
      if (SBORROW4(local_1c,iVar3)) {
        uVar2 = thunk_FUN_00402874(uVar2);
      }
      uVar1 = uVar2 - 2;
      if (SBORROW4(uVar2,2)) {
        uVar1 = thunk_FUN_00402874(uVar2 - 2);
      }
      break;
    case '\x02':
      FUN_0041160c(0,0,local_24);
      FUN_0043228c(local_c,local_24,(int *)&local_1c);
      local_10 = local_18;
      FUN_0041160c(0,0,local_24);
      FUN_0043228c(local_c,local_24,(int *)&local_1c);
      uVar1 = local_1c + local_c[0xe];
      if (SCARRY4(local_1c,local_c[0xe])) {
        uVar1 = thunk_FUN_00402874(uVar1);
      }
      break;
    case '\x03':
      FUN_0041160c(0,0,local_24);
      FUN_0043228c(local_c,local_24,(int *)&local_1c);
      local_10 = local_18;
      FUN_0041160c(0,0,local_24);
      FUN_0043228c(local_c,local_24,(int *)&local_1c);
      uVar1 = local_1c - local_8[0xe];
      if (SBORROW4(local_1c,local_8[0xe])) {
        uVar1 = thunk_FUN_00402874(uVar1);
      }
      break;
    case '\x04':
      FUN_0041160c(0,0,local_24);
      FUN_0043228c(local_c,local_24,(int *)&local_1c);
      uVar1 = local_18 + local_c[0xf];
      if (SCARRY4(local_18,local_c[0xf])) {
        uVar1 = thunk_FUN_00402874(uVar1);
      }
      local_10 = uVar1;
      FUN_0041160c(0,0,local_24);
      FUN_0043228c(local_c,local_24,(int *)&local_1c);
      uVar1 = local_1c + 2;
      if (SCARRY4(local_1c,2)) {
        uVar1 = thunk_FUN_00402874(local_1c + 2);
      }
      break;
    case '\x05':
      FUN_0041160c(0,0,local_24);
      FUN_0043228c(local_c,local_24,(int *)&local_1c);
      uVar1 = local_18 + local_c[0xf];
      if (SCARRY4(local_18,local_c[0xf])) {
        uVar1 = thunk_FUN_00402874(uVar1);
      }
      uVar2 = uVar1 - 1;
      if (SBORROW4(uVar1,1)) {
        uVar2 = thunk_FUN_00402874(uVar2);
      }
      local_10 = uVar2;
      FUN_0041160c(0,0,local_24);
      FUN_0043228c(local_c,local_24,(int *)&local_1c);
      iVar3 = local_8[0xe] - local_c[0xe];
      if (SBORROW4(local_8[0xe],local_c[0xe])) {
        local_1c = thunk_FUN_00402874(local_1c);
        iVar3 = extraout_EDX_00;
      }
      uVar2 = local_1c - iVar3;
      if (SBORROW4(local_1c,iVar3)) {
        uVar2 = thunk_FUN_00402874(uVar2);
      }
      uVar1 = uVar2 - 2;
      if (SBORROW4(uVar2,2)) {
        uVar1 = thunk_FUN_00402874(uVar2 - 2);
      }
    }
    local_14 = uVar1;
    (**(code **)(*local_8 + 0x7c))(local_8,local_14,local_10,local_8[0xf],local_8[0xe]);
  }
  return;
}

