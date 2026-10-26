/*
 * FUN_00493d24 at 00493d24
 * undefined1 __register FUN_00493d24(int * param_1, uint * param_2)
 * Address ranges: 00493d24-00493e29
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined1 FUN_00493d24(int *param_1,uint *param_2)

{
  bool bVar1;
  bool bVar2;
  int iVar3;
  short *psVar4;
  uint uVar5;
  int *piVar6;
  int iVar7;
  int local_2c;
  uint local_18;
  uint local_14;
  
  iVar3 = FUN_00494858(param_1);
  local_14 = *param_2 + 1;
  if (SCARRY4(*param_2,1)) {
    local_14 = thunk_FUN_00402874(local_14);
  }
  do {
    iVar7 = FUN_00490bb8(iVar3);
    if (iVar7 <= (int)local_14) {
      return 0;
    }
    psVar4 = (short *)FUN_00492148(iVar3,local_14);
    if (*psVar4 == 1) {
      *param_2 = local_14;
      return 1;
    }
    bVar1 = true;
    uVar5 = (int)*psVar4 - 2;
    if (SBORROW4((int)*psVar4,2)) {
      uVar5 = thunk_FUN_00402874(uVar5);
    }
    if (-1 < (int)uVar5) {
      local_2c = uVar5 + 1;
      local_18 = 0;
      do {
        uVar5 = local_18;
        if (9 < local_18) {
          uVar5 = thunk_FUN_00402874(local_18);
        }
        piVar6 = (int *)FUN_00494b98(param_1,(int)psVar4[uVar5 + 0xb]);
        iVar7 = FUN_00403224(piVar6,(int)&PTR_FUN_00474160);
        bVar2 = FUN_0047445c(iVar7);
        if (!bVar2) {
          if (9 < local_18) {
            local_18 = thunk_FUN_00402874(local_18);
          }
          local_14 = (uint)psVar4[local_18 + 0x15];
          bVar1 = false;
          break;
        }
        local_18 = local_18 + 1;
        local_2c = local_2c + -1;
      } while (local_2c != 0);
    }
    if (bVar1) {
      *param_2 = local_14;
      return 1;
    }
  } while( true );
}

