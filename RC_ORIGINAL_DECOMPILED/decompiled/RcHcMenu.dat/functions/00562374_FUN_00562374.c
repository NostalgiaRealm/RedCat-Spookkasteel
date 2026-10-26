/*
 * FUN_00562374 at 00562374
 * undefined __register FUN_00562374(int param_1, undefined1 param_2)
 * Address ranges: 00562374-0056238a;005623af-00562591
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_00562374(int param_1,undefined1 param_2)

{
  switch(param_2) {
  case 0:
    *(ushort *)(param_1 + 0x28e) = *(ushort *)(param_1 + 0x28e) & 0xff7e;
    *(ushort *)(param_1 + 0x28e) = *(ushort *)(param_1 + 0x28e) | 6;
    return;
  case 1:
    if (*(char *)(param_1 + 0x2cb) != '\0') {
      *(ushort *)(param_1 + 0x28e) = *(ushort *)(param_1 + 0x28e) | 1;
    }
    if (*(char *)(param_1 + 0x2ce) != '\0') {
      *(ushort *)(param_1 + 0x28e) = *(ushort *)(param_1 + 0x28e) | 0x80;
      return;
    }
    break;
  case 2:
    if (*(char *)(param_1 + 0x2cb) != '\0') {
      *(ushort *)(param_1 + 0x28e) = *(ushort *)(param_1 + 0x28e) | 1;
    }
    if (*(char *)(param_1 + 0x2ce) != '\0') {
      *(ushort *)(param_1 + 0x28e) = *(ushort *)(param_1 + 0x28e) | 0x80;
    }
    *(ushort *)(param_1 + 0x28e) = *(ushort *)(param_1 + 0x28e) & 0xfff9;
    return;
  case 3:
    if (*(char *)(param_1 + 0x2cb) != '\0') {
      *(ushort *)(param_1 + 0x28e) = *(ushort *)(param_1 + 0x28e) | 1;
    }
    if (*(char *)(param_1 + 0x2ce) != '\0') {
      *(ushort *)(param_1 + 0x28e) = *(ushort *)(param_1 + 0x28e) | 0x80;
    }
    *(ushort *)(param_1 + 0x28e) = *(ushort *)(param_1 + 0x28e) & 0xfff9;
    return;
  case 4:
    if (*(char *)(param_1 + 0x2cb) != '\0') {
      *(ushort *)(param_1 + 0x28e) = *(ushort *)(param_1 + 0x28e) | 1;
    }
    if (*(char *)(param_1 + 0x2ce) != '\0') {
      *(ushort *)(param_1 + 0x28e) = *(ushort *)(param_1 + 0x28e) | 0x80;
    }
    *(ushort *)(param_1 + 0x28e) = *(ushort *)(param_1 + 0x28e) & 0xfff9;
    return;
  case 5:
    if (*(char *)(param_1 + 0x2cb) != '\0') {
      *(ushort *)(param_1 + 0x28e) = *(ushort *)(param_1 + 0x28e) | 1;
    }
    if (*(char *)(param_1 + 0x2ce) != '\0') {
      *(ushort *)(param_1 + 0x28e) = *(ushort *)(param_1 + 0x28e) | 0x80;
    }
    *(ushort *)(param_1 + 0x28e) = *(ushort *)(param_1 + 0x28e) & 0xfff9;
    return;
  case 6:
    if (*(char *)(param_1 + 0x2cb) != '\0') {
      *(ushort *)(param_1 + 0x28e) = *(ushort *)(param_1 + 0x28e) | 1;
    }
    if (*(char *)(param_1 + 0x2ce) != '\0') {
      *(ushort *)(param_1 + 0x28e) = *(ushort *)(param_1 + 0x28e) | 0x80;
    }
    *(ushort *)(param_1 + 0x28e) = *(ushort *)(param_1 + 0x28e) & 0xfff9;
    return;
  case 7:
    *(ushort *)(param_1 + 0x28e) = *(ushort *)(param_1 + 0x28e) & 0xff7e;
    *(ushort *)(param_1 + 0x28e) = *(ushort *)(param_1 + 0x28e) | 6;
    return;
  case 8:
    if (*(char *)(param_1 + 0x2cb) != '\0') {
      *(ushort *)(param_1 + 0x28e) = *(ushort *)(param_1 + 0x28e) | 1;
    }
    if (*(char *)(param_1 + 0x2ce) != '\0') {
      *(ushort *)(param_1 + 0x28e) = *(ushort *)(param_1 + 0x28e) | 0x80;
    }
    *(ushort *)(param_1 + 0x28e) = *(ushort *)(param_1 + 0x28e) & 0xfff9;
  }
  return;
}

