/*
 * FUN_00406074 at 00406074
 * uint __register FUN_00406074(int param_1, int * param_2, undefined4 param_3)
 * Address ranges: 00406074-00406295
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

/* WARNING: Removing unreachable block (ram,0x0040615c) */

uint FUN_00406074(int param_1,int *param_2,undefined4 param_3)

{
  char cVar1;
  byte bVar2;
  byte bVar3;
  uint uVar4;
  uint uVar5;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  int extraout_EDX;
  int iVar6;
  uint uVar7;
  bool bVar8;
  uint local_1c;
  uint local_18;
  bool local_14;
  
  iVar6 = 1;
  local_1c = 0;
  local_18 = 0;
  if (param_1 == 0) {
    *param_2 = 1;
    return 0;
  }
  for (; *(char *)(param_1 + -1 + iVar6) == ' '; iVar6 = iVar6 + 1) {
  }
  local_14 = false;
  cVar1 = *(char *)(param_1 + -1 + iVar6);
  if (cVar1 == '-') {
    local_14 = true;
    iVar6 = iVar6 + 1;
  }
  else if (cVar1 == '+') {
    iVar6 = iVar6 + 1;
  }
  bVar2 = 1;
  if ((*(char *)(param_1 + -1 + iVar6) == '$') ||
     ((*(char *)(param_1 + -1 + iVar6) == '0' &&
      (bVar3 = FUN_00402af4(*(byte *)(param_1 + iVar6)), param_3 = extraout_ECX, bVar3 == 0x58)))) {
    if (*(char *)(param_1 + -1 + iVar6) == '0') {
      iVar6 = iVar6 + 1;
    }
    do {
      iVar6 = iVar6 + 1;
      bVar3 = *(byte *)(param_1 + -1 + iVar6);
      if ((byte)(bVar3 - 0x30) < 10) {
        uVar7 = bVar3 - 0x30;
      }
      else if ((byte)(bVar3 + 0xbf) < 6) {
        uVar7 = bVar3 - 0x37;
      }
      else {
        if (5 < (byte)(bVar3 + 0x9f)) goto LAB_0040618e;
        uVar7 = bVar3 - 0x57;
      }
      if (((local_18 != 0) && ((int)local_18 < 0)) ||
         ((local_18 != 0xfffffff && (0xfffffff < (int)local_18)))) goto LAB_0040618e;
      uVar5 = local_1c >> 0x1c;
      uVar4 = local_1c * 0x10;
      local_1c = uVar4 + uVar7;
      local_18 = (local_18 << 4 | uVar5) + ((int)uVar7 >> 0x1f) + (uint)CARRY4(uVar4,uVar7);
      bVar2 = 0;
    } while( true );
  }
  for (; bVar3 = *(byte *)(param_1 + -1 + iVar6), (byte)(bVar3 - 0x30) < 10; iVar6 = iVar6 + 1) {
    uVar7 = bVar3 - 0x30;
    if ((local_18 != 0) && ((int)local_18 < 0)) break;
    if (local_18 == 0xccccccc) {
      if (0xcccccccc < local_1c) break;
    }
    else if (0xccccccc < (int)local_18) break;
    uVar5 = FUN_004074a4(local_1c,local_18,param_3,10);
    local_1c = uVar7 + uVar5;
    local_18 = ((int)uVar7 >> 0x1f) + extraout_EDX + (uint)CARRY4(uVar7,uVar5);
    bVar2 = 0;
    param_3 = extraout_ECX_00;
  }
  if (local_14 != false) {
    bVar8 = local_1c != 0;
    local_1c = -local_1c;
    local_18 = -(local_18 + bVar8);
  }
  if ((local_18 != 0 || local_1c != 0) && (0x7fffffff < local_18 != local_14)) {
    iVar6 = iVar6 + -1;
  }
LAB_0040626c:
  if ((bool)(bVar2 | *(char *)(param_1 + -1 + iVar6) != '\0')) {
    *param_2 = iVar6;
  }
  else {
    *param_2 = 0;
  }
  return local_1c;
LAB_0040618e:
  if (local_14 != false) {
    local_1c = -local_1c;
  }
  goto LAB_0040626c;
}

