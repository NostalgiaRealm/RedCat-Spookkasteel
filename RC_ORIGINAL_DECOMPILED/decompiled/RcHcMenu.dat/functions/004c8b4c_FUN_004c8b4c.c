/*
 * FUN_004c8b4c at 004c8b4c
 * undefined __register FUN_004c8b4c(int * param_1, char param_2)
 * Address ranges: 004c8b4c-004c8be3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_004c8b4c(int *param_1,char param_2)

{
  char local_9;
  
  local_9 = param_2;
  if (param_1[0x4e] == 0) {
    local_9 = '\0';
  }
  if ((local_9 != *(char *)((int)param_1 + 0x131)) &&
     ((*(char *)((int)param_1 + 0x131) == '\0' || ((char)param_1[0x4a] != '\0')))) {
    *(char *)((int)param_1 + 0x131) = local_9;
    if (local_9 == '\0') {
      *(undefined1 *)((int)param_1 + 0x161) = 0;
      (**(code **)(*param_1 + 0x78))();
    }
    else {
      if (*(char *)((int)param_1 + 0x161) == '\0') {
        (**(code **)(*param_1 + 0x74))();
      }
      *(undefined1 *)((int)param_1 + 0x161) = 3;
    }
    if (local_9 != '\0') {
      FUN_004c8afc((int)param_1);
    }
  }
  return;
}

