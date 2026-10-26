/*
 * FUN_005d34c0 at 005d34c0
 * undefined FUN_005d34c0(void)
 * Address ranges: 005d34c0-005d35d4
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_005d34c0(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  int local_1c;
  int local_10;
  undefined1 local_c [12];
  
  FUN_005d35e0(param_1);
  piVar3 = (int *)(DAT_006cefd0 + 0x3e4);
  local_1c = 0;
  iVar2 = DAT_006cefcc;
  do {
    iVar4 = 0;
    if ((*piVar3 != 0) && (local_10 = 0, 0 < *(int *)(iVar2 + 0xa0))) {
      iVar5 = DAT_006cefc4 + 0x270;
      do {
        if (*(int *)(iVar5 + 0x18) == *(int *)(param_1 + 4)) {
          uVar1 = *(undefined4 *)(*(int *)(iVar2 + 0x48) + iVar4);
          FUN_005b2fe0(local_c);
          FUN_005b3730(local_c);
          FUN_005b3000(local_c);
          FUN_005d3a00(piVar3,local_c,local_1c,uVar1);
          iVar2 = DAT_006cefcc;
        }
        local_10 = local_10 + 1;
        iVar4 = iVar4 + 0x50;
        iVar5 = iVar5 + 0xd4;
      } while (local_10 < *(int *)(iVar2 + 0xa0));
    }
    local_1c = local_1c + 1;
    piVar3 = piVar3 + 0xd;
  } while (local_1c < 0x20);
  return 1;
}

