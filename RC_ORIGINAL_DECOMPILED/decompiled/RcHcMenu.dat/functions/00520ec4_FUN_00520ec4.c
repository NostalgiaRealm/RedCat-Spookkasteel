/*
 * FUN_00520ec4 at 00520ec4
 * undefined __register FUN_00520ec4(int * param_1, int * param_2)
 * Address ranges: 00520ec4-00520fc2
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_00520ec4(int *param_1,int *param_2)

{
  uint uVar1;
  uint uVar2;
  HDC hdc;
  BOOL BVar3;
  RECT *lprect;
  RECT local_40;
  RECT local_30;
  int local_20;
  byte local_19;
  uint local_18;
  int local_14 [2];
  int *local_c;
  int *local_8;
  
  local_c = param_2;
  local_8 = param_1;
  uVar1 = FUN_0051e5f0(param_1[0x9f]);
  uVar2 = uVar1 - 1;
  if (SBORROW4(uVar1,1)) {
    uVar2 = thunk_FUN_00402874(uVar2);
  }
  if (-1 < (int)uVar2) {
    local_20 = uVar2 + 1;
    local_18 = 0;
    do {
      local_14[0] = FUN_0051e404((int *)local_8[0x9f],local_18);
      local_14[1] = 0;
      FUN_00524ec4((int *)local_8[0x9d],local_14,&local_30.left);
      local_19 = 3;
      lprect = &local_30;
      hdc = (HDC)FUN_0041cf6c(local_c);
      BVar3 = RectVisible(hdc,lprect);
      if (BVar3 != 0) {
        (**(code **)(*local_8 + 0xc4))
                  (local_8,local_c,local_14,CONCAT31((int3)((uint)&local_30 >> 8),local_19),
                   &local_30);
      }
      local_18 = local_18 + 1;
      local_20 = local_20 + -1;
    } while (local_20 != 0);
  }
  if ((char)local_8[0x8e] != '\0') {
    if ((local_19 & 1) == 0) {
      FUN_0041c318((int *)local_c[5],0xffffff);
    }
    else {
      FUN_0041c318((int *)local_c[5],0x8000000d);
    }
    FUN_00525054((int *)local_8[0x9d],0,(uint *)&local_40);
    FUN_0041c97c(local_c,&local_40);
  }
  return;
}

