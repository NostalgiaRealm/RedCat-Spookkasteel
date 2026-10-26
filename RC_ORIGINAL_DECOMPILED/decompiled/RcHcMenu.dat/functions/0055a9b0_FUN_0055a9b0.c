/*
 * FUN_0055a9b0 at 0055a9b0
 * undefined1 __register FUN_0055a9b0(int param_1, int * param_2)
 * Address ranges: 0055a9b0-0055aac5
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined1 FUN_0055a9b0(int param_1,int *param_2)

{
  undefined1 local_d;
  
  local_d = 0;
  if (*(char *)(param_1 + 0x350) == '\x02') {
    local_d = 1;
    if (*param_2 == *(int *)(param_1 + 0x30c)) {
      *param_2 = *(int *)(param_1 + 0x308);
    }
    else if (*param_2 == *(int *)(param_1 + 0x308)) {
      *param_2 = *(int *)(param_1 + 0x310);
    }
    else if (*param_2 == *(int *)(param_1 + 0x310)) {
      *param_2 = *(int *)(param_1 + 0x314);
    }
    else if (*param_2 == *(int *)(param_1 + 0x314)) {
      *param_2 = *(int *)(param_1 + 0x318);
    }
    else if (*param_2 == *(int *)(param_1 + 0x318)) {
      *param_2 = *(int *)(param_1 + 0x31c);
    }
    else if (*param_2 == *(int *)(param_1 + 0x31c)) {
      *param_2 = *(int *)(param_1 + 800);
    }
    else if (*param_2 == *(int *)(param_1 + 800)) {
      *param_2 = *(int *)(param_1 + 0x30c);
      local_d = 0;
    }
  }
  return local_d;
}

