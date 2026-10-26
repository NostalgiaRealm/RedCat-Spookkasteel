/*
 * FUN_0043c31c at 0043c31c
 * undefined __register FUN_0043c31c(int param_1)
 * Address ranges: 0043c31c-0043c404
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_0043c31c(int param_1)

{
  int iVar1;
  HGDIOBJ pvVar2;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  
  iVar1 = *(int *)(param_1 + 0x60);
  if (iVar1 != 0) {
    if (*(char *)(*(int *)(iVar1 + 0x14) + 0x10) == '\x01') {
      local_18 = FUN_0043a554(iVar1,'\x02');
      local_14 = (int)*(uint *)(param_1 + 0xc) >> 1;
      if (local_14 < 0) {
        local_14 = local_14 + (uint)((*(uint *)(param_1 + 0xc) & 1) != 0);
      }
      local_14 = *(int *)(param_1 + 0x54) - local_14;
      local_10 = FUN_0043a5c0(*(int *)(param_1 + 0x60),'\x02');
      local_10 = local_10 + local_18;
      local_c = local_14 + *(int *)(param_1 + 0xc);
    }
    else {
      local_18 = (int)*(uint *)(param_1 + 0xc) >> 1;
      if (local_18 < 0) {
        local_18 = local_18 + (uint)((*(uint *)(param_1 + 0xc) & 1) != 0);
      }
      local_18 = *(int *)(param_1 + 0x50) - local_18;
      local_14 = FUN_0043a554(iVar1,'\x01');
      local_10 = local_18 + *(int *)(param_1 + 0xc);
      local_c = FUN_0043a5c0(*(int *)(param_1 + 0x60),'\x01');
      local_c = local_c + local_14;
    }
    pvVar2 = (HGDIOBJ)FUN_0041c34c(*(int *)(param_1 + 0x10));
    pvVar2 = SelectObject(*(HDC *)(param_1 + 0x58),pvVar2);
    PatBlt(*(HDC *)(param_1 + 0x58),local_18,local_14,local_10 - local_18,local_c - local_14,
           0x5a0049);
    SelectObject(*(HDC *)(param_1 + 0x58),pvVar2);
  }
  return;
}

