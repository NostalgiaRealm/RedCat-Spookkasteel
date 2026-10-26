/*
 * FUN_0051dfa8 at 0051dfa8
 * undefined __register FUN_0051dfa8(int param_1)
 * Address ranges: 0051dfa8-0051e074
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_0051dfa8(int param_1)

{
  int iVar1;
  int *piVar2;
  uint uVar3;
  uint extraout_EDX;
  uint *extraout_EDX_00;
  uint *puVar4;
  uint local_c;
  
  local_c = 0;
  do {
    piVar2 = FUN_004410c0((int *)&PTR_FUN_0043fcd8,'\x01',*(int **)(param_1 + 0x220));
    uVar3 = local_c;
    if (6 < local_c) {
      piVar2 = (int *)thunk_FUN_00402874((uint)piVar2);
      uVar3 = extraout_EDX;
    }
    *(int **)(param_1 + 0x224 + uVar3 * 4) = piVar2;
    uVar3 = local_c;
    if (6 < local_c) {
      uVar3 = thunk_FUN_00402874(local_c);
    }
    puVar4 = *(uint **)(&DAT_00571ebc + uVar3 * 4);
    uVar3 = local_c;
    if (6 < local_c) {
      uVar3 = thunk_FUN_00402874(local_c);
      puVar4 = extraout_EDX_00;
    }
    FUN_00442e54(*(int **)(param_1 + 0x224 + uVar3 * 4),puVar4);
    uVar3 = local_c;
    if (6 < local_c) {
      uVar3 = thunk_FUN_00402874(local_c);
    }
    iVar1 = *(int *)(param_1 + 0x224 + uVar3 * 4);
    *(int *)(iVar1 + 0x84) = param_1;
    *(code **)(iVar1 + 0x80) = FUN_0051e61c;
    uVar3 = local_c;
    if (6 < local_c) {
      uVar3 = thunk_FUN_00402874(local_c);
    }
    FUN_00443320(*(int **)(*(int *)(param_1 + 0x220) + 0x28),*(int *)(param_1 + 0x224 + uVar3 * 4));
    local_c = local_c + 1;
  } while (local_c != 7);
  return;
}

